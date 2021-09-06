//
// Created by 艾峥鹏 on 2021/8/17.
//

#include "IndexOutOfBoundsException.h"

IndexOutOfBoundsException::IndexOutOfBoundsException() : RuntimeException() {}

IndexOutOfBoundsException::IndexOutOfBoundsException(const std::shared_ptr<String> &s) : RuntimeException(s) {}
