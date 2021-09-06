//
// Created by 艾峥鹏 on 2021/8/15.
//

#include "Throwable.h"

Throwable::Throwable(const std::shared_ptr<String> &message, const std::shared_ptr<Throwable> &cause,
                     bool enableSuppression, bool writableStackTrace) {
    if (writableStackTrace)
        fillInStackTrace();
    else
        stackTrace = {};
    detailMessage = message;
    this->cause = cause;
    if (!enableSuppression)
        suppressedExceptions = nullptr;
}

Throwable::Throwable() : cause(this) {
    fillInStackTrace();
}

Throwable::Throwable(const std::shared_ptr<String> &message) : cause(this) {
    fillInStackTrace();
    detailMessage = message;
}

Throwable::Throwable(const std::shared_ptr<String> &message, const std::shared_ptr<Throwable> &cause) {
    fillInStackTrace();
    detailMessage = message;
    this->cause = cause;
}

Throwable::Throwable(const std::shared_ptr<Throwable> &cause) {
    fillInStackTrace();
    detailMessage = (cause == nullptr ? nullptr : cause->toString());
    this->cause = cause;
}

void Throwable::addSuppressed(const std::shared_ptr<Throwable> &exception) {
    // if (exception.get() == this)
    //     throw new IllegalArgumentException(SELF_SUPPRESSION_MESSAGE, exception);
    // if (exception == nullptr)
    //     throw new NullPointerException(NULL_CAUSE_MESSAGE);
    if (suppressedExceptions == nullptr) // Suppressed exceptions not recorded
        return;
    // if (suppressedExceptions == SUPPRESSED_SENTINEL)
    //     suppressedExceptions = new ArrayList<>(1);
    // suppressedExceptions.add(exception);
}

std::shared_ptr<Throwable> Throwable::fillInStackTrace() { // todo
    if (!stackTrace.empty() || backtrace != nullptr /* Out of protocol state */ ) {
        // fillInStackTrace(0);
        // stackTrace = UNASSIGNED_STACK;
    }
    return std::shared_ptr<Throwable>(this);
}

std::shared_ptr<Throwable> Throwable::getCause() const {
    return (cause.get() == this ? nullptr : cause);
}

std::shared_ptr<String> Throwable::getLocalizedMessage() const {
    return getMessage();
}

std::shared_ptr<String> Throwable::getMessage() const {
    return detailMessage;
}

std::vector<std::shared_ptr<StackTraceElement>> Throwable::getStackTrace() const { // todo
    return {};
}

std::vector<std::shared_ptr<Throwable>> Throwable::getSuppressed() const { // todo
    return {};
}

std::shared_ptr<Throwable> Throwable::initCause(const std::shared_ptr<Throwable> &cause) { // todo
    // if (this->cause.get() != this)
    //     throw new IllegalStateException("Can't overwrite cause with " + Objects.toString(cause, "a null"), this);
    // if (cause.get() == this)
    //     throw new IllegalArgumentException("Self-causation not permitted", this);
    this->cause = cause;
    return std::shared_ptr<Throwable>(this);
}

void Throwable::printStackTrace() const { // todo

}

void Throwable::printStackTrace(const std::shared_ptr<PrintStream> &s) const { // todo

}

void Throwable::printStackTrace(const std::shared_ptr<PrintWriter> &s) const { // todo

}

void Throwable::setStackTrace(const std::vector<std::shared_ptr<StackTraceElement>> &stackTrace) { // todo

}

std::shared_ptr<String> Throwable::toString() const { // todo
    return Object::toString();
}
