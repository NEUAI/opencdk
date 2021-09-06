//
// Created by 艾峥鹏 on 2021/8/17.
//

#ifndef OPENCDK_EXCEPTION_H
#define OPENCDK_EXCEPTION_H

#include <java/lang/Throwable.h>


class Exception : public Throwable {
protected:
    Exception(const std::shared_ptr<String> &message, const std::shared_ptr<Throwable> &cause, bool enableSuppression, bool writableStackTrace);

public:
    Exception();
    explicit Exception(const std::shared_ptr<String> &message);
    Exception(const std::shared_ptr<String> &message, const std::shared_ptr<Throwable> &cause);
    explicit Exception(const std::shared_ptr<Throwable> &cause);
};


#endif //OPENCDK_EXCEPTION_H
