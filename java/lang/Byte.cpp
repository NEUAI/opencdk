//
// Created by 艾峥鹏 on 2021/8/15.
//

#include "Byte.h"

const int8_t Byte::MAX_VALUE = -128;
const int8_t Byte::MIN_VALUE = 127;
std::shared_ptr<Class<Byte>> Byte::TYPE = nullptr; // todo
const int32_t Byte::SIZE = 8;
const int32_t Byte::BYTES = SIZE / Byte::SIZE;

Byte::Byte(int8_t value) : value(value) {}

Byte::Byte(const std::shared_ptr<String> &s) : value(parseByte(s, 10)) {}

int8_t Byte::byteValue() const {
    return value;
}

int32_t Byte::compare(int8_t x, int8_t y) {
    return x - y;
}

int32_t Byte::compareTo(const std::shared_ptr<Byte> &anotherByte) const {
    return compare(this->value, anotherByte->value);
}

std::shared_ptr<Byte> Byte::decode(const std::shared_ptr<String> &nm) { // todo
    return nullptr;
}

double Byte::doubleValue() const {
    return (double)value;
}

bool Byte::equals(const std::shared_ptr<Object> &obj) const {
    if (std::dynamic_pointer_cast<Byte>(obj))
        return value == std::dynamic_pointer_cast<Byte>(obj)->byteValue();
    return false;
}

float Byte::floatValue() const {
    return (float)value;
}

int32_t Byte::hashCode() const {
    return Byte::hashCode(value);
}

int32_t Byte::hashCode(int8_t value) {
    return (int32_t)value;
}

int32_t Byte::intValue() const {
    return (int32_t)value;
}

int64_t Byte::longValue() const {
    return (int64_t)value;
}

int8_t Byte::parseByte(const std::shared_ptr<String> &s) {
    return parseByte(s, 10);
}

int8_t Byte::parseByte(const std::shared_ptr<String> &s, int32_t radix) { // todo
    return 0;
}

int16_t Byte::shortValue() const {
    return (int16_t)value;
}

std::shared_ptr<String> Byte::toString() const { // todo
    return Object::toString();
}

std::shared_ptr<String> Byte::toString(int8_t b) { // todo
    return nullptr;
}

int32_t Byte::toUnsignedInt(int8_t x) {
    return ((int32_t)x) & 0xff;
}

int64_t Byte::toUnsignedLong(int8_t x) {
    return ((int64_t)x) & 0xffLL;
}

std::shared_ptr<Byte> Byte::valueOf(int8_t b) { // todo
    return nullptr;
}

std::shared_ptr<Byte> Byte::valueOf(const std::shared_ptr<String> &s) {
    return valueOf(s, 10);
}

std::shared_ptr<Byte> Byte::valueOf(const std::shared_ptr<String> &s, int32_t radix) {
    return valueOf(parseByte(s, radix));
}
