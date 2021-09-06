//
// Created by 艾峥鹏 on 2021/8/15.
//

#include "Number.h"

Number::Number() = default;

int8_t Number::byteValue() const {
    return (int8_t)intValue();
}

int16_t Number::shortValue() const {
    return (int16_t)intValue();
}
