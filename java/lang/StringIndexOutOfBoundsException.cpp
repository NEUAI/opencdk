//
// Created by 艾峥鹏 on 2021/8/17.
//

#include "StringIndexOutOfBoundsException.h"
#include <java/lang/String.h>
#include <java/lang/Integer.h>

StringIndexOutOfBoundsException::StringIndexOutOfBoundsException() : IndexOutOfBoundsException() {}

StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(int32_t index) : IndexOutOfBoundsException(std::make_shared<String>(u"String index out of range: " + Integer(index).toString()->toCharArray())) {}

StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(const std::shared_ptr<String> &s) : IndexOutOfBoundsException(s) {}
