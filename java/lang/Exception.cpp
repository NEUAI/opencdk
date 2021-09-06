//
// Created by 艾峥鹏 on 2021/8/17.
//

#include "Exception.h"

Exception::Exception(const std::shared_ptr<String> &message, const std::shared_ptr<Throwable> &cause, bool enableSuppression, bool writableStackTrace) : Throwable(message, cause, enableSuppression, writableStackTrace) {}

Exception::Exception() : Throwable() {}

Exception::Exception(const std::shared_ptr<String> &message) : Throwable(message) {}

Exception::Exception(const std::shared_ptr<String> &message, const std::shared_ptr<Throwable> &cause) : Throwable(message, cause) {}

Exception::Exception(const std::shared_ptr<Throwable> &cause) : Throwable(cause) {}
