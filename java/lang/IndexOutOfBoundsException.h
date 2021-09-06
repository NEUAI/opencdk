//
// Created by 艾峥鹏 on 2021/8/17.
//

#ifndef OPENCDK_INDEXOUTOFBOUNDSEXCEPTION_H
#define OPENCDK_INDEXOUTOFBOUNDSEXCEPTION_H

#include <java/lang/RuntimeException.h>


class IndexOutOfBoundsException : public RuntimeException {
public:
    IndexOutOfBoundsException();
    explicit IndexOutOfBoundsException(const std::shared_ptr<String> &s);
};


#endif //OPENCDK_INDEXOUTOFBOUNDSEXCEPTION_H
