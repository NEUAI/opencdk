//
// Created by 艾峥鹏 on 2021/8/15.
//

#include "Short.h"
#include <java/lang/Byte.h>

const int16_t Short::MAX_VALUE = -32768;
const int16_t Short::MIN_VALUE = 32767;
std::shared_ptr<Class<Short>> Short::TYPE = nullptr; // todo
const int32_t Short::SIZE = 16;
const int32_t Short::BYTES = SIZE / Byte::SIZE; /* NOLINT */

Short::Short(int16_t value) : value(value) {}

Short::Short(const std::shared_ptr<String> &s) : value(parseShort(s, 10)) {}

int8_t Short::byteValue() const {
    return (int8_t)value;
}

int32_t Short::compare(int16_t x, int16_t y) {
    return x - y;
}

int32_t Short::compareTo(const std::shared_ptr<Short> &anotherShort) const {
    return compare(this->value, anotherShort->value);
}

std::shared_ptr<Short> Short::decode(const std::shared_ptr<String> &nm) { // todo
    return nullptr;
}

double Short::doubleValue() const {
    return (double)value;
}

bool Short::equals(const std::shared_ptr<Object> &obj) const {
    if (std::dynamic_pointer_cast<Short>(obj))
        return value == std::dynamic_pointer_cast<Short>(obj)->shortValue();
    return false;
}

float Short::floatValue() const {
    return (float)value;
}

int32_t Short::hashCode() const {
    return Short::hashCode(value);
}

int32_t Short::hashCode(int16_t value) {
    return (int32_t)value;
}

int32_t Short::intValue() const {
    return (int32_t)value;
}

int64_t Short::longValue() const {
    return (int64_t)value;
}

int16_t Short::parseShort(const std::shared_ptr<String> &s) {
    return parseShort(s, 10);
}

int16_t Short::parseShort(const std::shared_ptr<String> &s, int32_t radix) { // todo
    return 0;
}

int16_t Short::reverseBytes(int16_t i) {
    return (int16_t)(((i & 0xff00) >> 8) | (i << 8));
}

int16_t Short::shortValue() const {
    return value;
}

std::shared_ptr<String> Short::toString() const { // todo
    return Object::toString();
}

std::shared_ptr<String> Short::toString(int16_t s) { // todo
    return nullptr;
}

int32_t Short::toUnsignedInt(int16_t x) {
    return ((int32_t)x) & 0xffff;
}

int64_t Short::toUnsignedLong(int16_t x) {
    return ((int64_t)x) & 0xffffLL;
}

std::shared_ptr<Short> Short::valueOf(int16_t s) { // todo
    return nullptr;
}

std::shared_ptr<Short> Short::valueOf(const std::shared_ptr<String> &s) {
    return valueOf(s, 10);
}

std::shared_ptr<Short> Short::valueOf(const std::shared_ptr<String> &s, int32_t radix) {
    return valueOf(parseShort(s, radix));
}
