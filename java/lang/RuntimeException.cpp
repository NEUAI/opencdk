//
// Created by 艾峥鹏 on 2021/8/17.
//

#include "RuntimeException.h"

RuntimeException::RuntimeException(const std::shared_ptr<String> &message, const std::shared_ptr<Throwable> &cause, bool enableSuppression, bool writableStackTrace) : Exception(message, cause, enableSuppression, writableStackTrace) {}

RuntimeException::RuntimeException() : Exception() {}

RuntimeException::RuntimeException(const std::shared_ptr<String> &message) : Exception(message) {}

RuntimeException::RuntimeException(const std::shared_ptr<String> &message, const std::shared_ptr<Throwable> &cause) : Exception(message, cause) {}

RuntimeException::RuntimeException(const std::shared_ptr<Throwable> &cause) : Exception(cause) {}
