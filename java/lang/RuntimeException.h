//
// Created by 艾峥鹏 on 2021/8/17.
//

#ifndef OPENCDK_RUNTIMEEXCEPTION_H
#define OPENCDK_RUNTIMEEXCEPTION_H

#include <java/lang/Exception.h>


class RuntimeException : public Exception {
protected:
    RuntimeException(const std::shared_ptr<String> &message, const std::shared_ptr<Throwable> &cause, bool enableSuppression, bool writableStackTrace);

public:
    RuntimeException();
    explicit RuntimeException(const std::shared_ptr<String> &message);
    RuntimeException(const std::shared_ptr<String> &message, const std::shared_ptr<Throwable> &cause);
    explicit RuntimeException(const std::shared_ptr<Throwable> &cause);
};


#endif //OPENCDK_RUNTIMEEXCEPTION_H
