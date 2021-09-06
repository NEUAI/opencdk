//
// Created by 艾峥鹏 on 2021/8/16.
//

#include "Float.h"
#include <java/lang/Byte.h>
#include <java/lang/Math.h>

const float Float::POSITIVE_INFINITY = 1.0f / 0.0f;
const float Float::NEGATIVE_INFINITY = -1.0f / 0.0f;
const float Float::NaN = 0.0f / 0.0f;
const float Float::MAX_VALUE = 0x1.fffffeP+127f;
const float Float::MIN_NORMAL = 0x1.0p-126f;
const float Float::MIN_VALUE = 0x0.000002P-126f;
const int32_t Float::MAX_EXPONENT = 127;
const int32_t Float::MIN_EXPONENT = -126;
const int32_t Float::SIZE = 32;
const int32_t Float::BYTES = SIZE / Byte::SIZE; /* NOLINT */
std::shared_ptr<Class<Float>> Float::TYPE = nullptr; // todo

Float::Float(double value) : value((float)value) {}

Float::Float(float value) : value(value) {}

Float::Float(const std::shared_ptr<String> &s) : value(parseFloat(s)) {}

int8_t Float::byteValue() const {
    return (int8_t)value;
}

int32_t Float::compare(float f1, float f2) {
    if (f1 < f2)
        return -1;
    if (f1 > f2)
        return 1;
    int32_t thisBits = Float::floatToIntBits(f1);
    int32_t anotherBits = Float::floatToIntBits(f2);
    return (thisBits == anotherBits ?  0 : (thisBits < anotherBits ? -1 : 1));
}

int32_t Float::compareTo(const std::shared_ptr<Float> &anotherFloat) const {
    return Float::compare(value, anotherFloat->value);
}

double Float::doubleValue() const {
    return (double)value;
}

bool Float::equals(const std::shared_ptr<Object> &obj) const {
    return (std::dynamic_pointer_cast<Float>(obj)) && (floatToIntBits(std::dynamic_pointer_cast<Float>(obj)->value) == floatToIntBits(value));
}

int32_t Float::floatToIntBits(float value) { // todo
    return 0;
}

int32_t Float::floatToRawIntBits(float value) { // todo
    return 0;
}

float Float::floatValue() const {
    return value;
}

int32_t Float::hashCode() const {
    return Float::hashCode(value);
}

int32_t Float::hashCode(float value) {
    return floatToIntBits(value);
}

float Float::intBitsToFloat(int32_t bits) { // todo
    return 0;
}

int32_t Float::intValue() const {
    return (int32_t)value;
}

bool Float::isFinite(float f) { // todo
    return false;
}

bool Float::isInfinite() const {
    return isInfinite(value);
}

bool Float::isInfinite(float v) {
    return (v == POSITIVE_INFINITY) || (v == NEGATIVE_INFINITY);
}

bool Float::isNaN() const {
    return isNaN(value);
}

bool Float::isNaN(float v) {
    return (v != v);
}

int64_t Float::longValue() const {
    return (int64_t)value;
}

float Float::max(float a, float b) {
    return Math::max(a, b);
}

float Float::min(float a, float b) {
    return Math::min(a, b);
}

float Float::parseFloat(const std::shared_ptr<String> &s) { // todo
    return 0;
}

int16_t Float::shortValue() const {
    return (int16_t)value;
}

float Float::sum(float a, float b) {
    return a + b;
}

std::shared_ptr<String> Float::toHexString(float f) { // todo
    return nullptr;
}

std::shared_ptr<String> Float::toString() const {
    return Float::toString(value);
}

std::shared_ptr<String> Float::toString(float f) { // todo
    return nullptr;
}

std::shared_ptr<Float> Float::valueOf(float f) {
    return std::make_shared<Float>(f);
}

std::shared_ptr<Float> Float::valueOf(const std::shared_ptr<String> &s) {
    return std::make_shared<Float>(parseFloat(s));
}
