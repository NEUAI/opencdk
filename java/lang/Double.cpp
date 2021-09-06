//
// Created by 艾峥鹏 on 2021/8/16.
//

#include "Double.h"
#include <java/lang/Byte.h>
#include <java/lang/Math.h>

const double Double::POSITIVE_INFINITY = 1.0 / 0.0;
const double Double::NEGATIVE_INFINITY = -1.0 / 0.0;
const double Double::NaN = 0.0 / 0.0;
const double Double::MAX_VALUE = 0x1.fffffffffffffP+1023;
const double Double::MIN_NORMAL = 0x1.0p-1022;
const double Double::MIN_VALUE = 0x0.0000000000001P-1022;
const int32_t Double::MAX_EXPONENT = 1023;
const int32_t Double::MIN_EXPONENT = -1022;
const int32_t Double::SIZE = 64;
const int32_t Double::BYTES = SIZE / Byte::SIZE; /* NOLINT */
std::shared_ptr<Class<Double>> Double::TYPE = nullptr; // todo

Double::Double(double value) : value(value) {}

Double::Double(const std::shared_ptr<String> &s) : value(parseDouble(s)) {}

int8_t Double::byteValue() const {
    return (int8_t)value;
}

int32_t Double::compare(double d1, double d2) {
    if (d1 < d2)
        return -1;
    if (d1 > d2)
        return 1;
    int64_t thisBits = Double::doubleToLongBits(d1);
    int64_t anotherBits = Double::doubleToLongBits(d2);
    return (thisBits == anotherBits ? 0 : (thisBits < anotherBits ? -1 : 1));
}

int32_t Double::compareTo(const std::shared_ptr<Double> &anotherDouble) const {
    return Double::compare(value, anotherDouble->value);
}

int64_t Double::doubleToLongBits(double value) { // todo
    return 0;
}

int64_t Double::doubleToRawLongBits(double value) { // todo
    return 0;
}

double Double::doubleValue() const {
    return value;
}

bool Double::equals(const std::shared_ptr<Object> &obj) const {
    return (std::dynamic_pointer_cast<Double>(obj)) && (doubleToLongBits(std::dynamic_pointer_cast<Double>(obj)->value) == doubleToLongBits(value));
}

float Double::floatValue() const {
    return (float)value;
}

int32_t Double::hashCode() const {
    return Double::hashCode(value);
}

int32_t Double::hashCode(double value) { // todo
    return 0;
}

int32_t Double::intValue() const {
    return (int32_t)value;
}

bool Double::isFinite(double d) { // todo
    return false;
}

bool Double::isInfinite() const {
    return isInfinite(value);
}

bool Double::isInfinite(double v) {
    return (v == POSITIVE_INFINITY) || (v == NEGATIVE_INFINITY);
}

bool Double::isNaN() const {
    return isNaN(value);
}

bool Double::isNaN(double v) {
    return (v != v);
}

double Double::longBitsToDouble(int64_t bits) { // todo
    return 0;
}

int64_t Double::longValue() const {
    return (int64_t)value;
}

double Double::max(double a, double b) {
    return Math::max(a, b);
}

double Double::min(double a, double b) {
    return Math::min(a, b);
}

double Double::parseDouble(const std::shared_ptr<String> &s) { // todo
    return 0;
}

int16_t Double::shortValue() const {
    return (int16_t)value;
}

double Double::sum(double a, double b) {
    return a + b;
}

std::shared_ptr<String> Double::toHexString(double d) { // todo
    return nullptr;
}

std::shared_ptr<String> Double::toString() const {
    return toString(value);
}

std::shared_ptr<String> Double::toString(double d) { // todo
    return nullptr;
}

std::shared_ptr<Double> Double::valueOf(double d) {
    return std::make_shared<Double>(d);
}

std::shared_ptr<Double> Double::valueOf(const std::shared_ptr<String> &s) {
    return std::make_shared<Double>(parseDouble(s));
}
