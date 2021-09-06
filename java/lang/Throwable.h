//
// Created by 艾峥鹏 on 2021/8/15.
//

#ifndef OPENCDK_THROWABLE_H
#define OPENCDK_THROWABLE_H

#include <java/lang/Object.h>
#include <java/io/Serializable.h>

class StackTraceElement;
class PrintStream;
class PrintWriter;
template <class T> class List;


class Throwable : public Object, public Serializable {
    std::shared_ptr<Object> backtrace;
    std::shared_ptr<String> detailMessage;
    static std::shared_ptr<std::vector<std::shared_ptr<StackTraceElement>>> UNASSIGNED_STACK;
    std::shared_ptr<Throwable> cause;
    std::vector<std::shared_ptr<StackTraceElement>> stackTrace;
    static std::shared_ptr<List<Throwable>> SUPPRESSED_SENTINEL;
    std::shared_ptr<List<Throwable>> suppressedExceptions;
    static std::shared_ptr<String> NULL_CAUSE_MESSAGE;
    static std::shared_ptr<String> SELF_SUPPRESSION_MESSAGE;
    static std::shared_ptr<String> CAUSE_CAPTION;
    static std::shared_ptr<String> SUPPRESSED_CAPTION;

protected:
    Throwable(const std::shared_ptr<String> &message, const std::shared_ptr<Throwable> &cause, bool enableSuppression, bool writableStackTrace);

public:
    Throwable();
    explicit Throwable(const std::shared_ptr<String> &message);
    Throwable(const std::shared_ptr<String> &message, const std::shared_ptr<Throwable> &cause);
    explicit Throwable(const std::shared_ptr<Throwable> &cause);
    virtual void addSuppressed(const std::shared_ptr<Throwable> &exception);
    virtual std::shared_ptr<Throwable> fillInStackTrace();
    [[nodiscard]] virtual std::shared_ptr<Throwable> getCause() const;
    [[nodiscard]] virtual std::shared_ptr<String> getLocalizedMessage() const;
    [[nodiscard]] virtual std::shared_ptr<String> getMessage() const;
    [[nodiscard]] virtual std::vector<std::shared_ptr<StackTraceElement>> getStackTrace() const;
    [[nodiscard]] virtual std::vector<std::shared_ptr<Throwable>> getSuppressed() const;
    virtual std::shared_ptr<Throwable> initCause(const std::shared_ptr<Throwable> &cause);
    virtual void printStackTrace() const;
    virtual void printStackTrace(const std::shared_ptr<PrintStream> &s) const;
    virtual void printStackTrace(const std::shared_ptr<PrintWriter> &s) const;
    virtual void setStackTrace(const std::vector<std::shared_ptr<StackTraceElement>> &stackTrace);
    [[nodiscard]] std::shared_ptr<String> toString() const override;
};


#endif //OPENCDK_THROWABLE_H
