//
// Created by 艾峥鹏 on 2021/8/17.
//

#ifndef OPENCDK_STRINGINDEXOUTOFBOUNDSEXCEPTION_H
#define OPENCDK_STRINGINDEXOUTOFBOUNDSEXCEPTION_H

#include <java/lang/IndexOutOfBoundsException.h>


class StringIndexOutOfBoundsException : public IndexOutOfBoundsException {
public:
    StringIndexOutOfBoundsException();
    explicit StringIndexOutOfBoundsException(int32_t index);
    explicit StringIndexOutOfBoundsException(const std::shared_ptr<String> &s);
};


#endif //OPENCDK_STRINGINDEXOUTOFBOUNDSEXCEPTION_H
