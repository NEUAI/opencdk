//
// Created by 艾峥鹏 on 2021/8/15.
//

#ifndef OPENCDK_NUMBER_H
#define OPENCDK_NUMBER_H

#include <java/lang/Object.h>
#include <java/io/Serializable.h>


class Number : public Object, public Serializable {
public:
    Number();
    [[nodiscard]] virtual int8_t byteValue() const;
    [[nodiscard]] virtual double doubleValue() const = 0;
    [[nodiscard]] virtual float floatValue() const = 0;
    [[nodiscard]] virtual int32_t intValue() const = 0;
    [[nodiscard]] virtual int64_t longValue() const = 0;
    [[nodiscard]] virtual int16_t shortValue() const;
};


#endif //OPENCDK_NUMBER_H
