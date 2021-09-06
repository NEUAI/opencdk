//
// Created by 艾峥鹏 on 2021/8/16.
//

#include "Integer.h"
#include <java/lang/Byte.h>

const int32_t Integer::MAX_VALUE = 0x7fffffff;
const int32_t Integer::MIN_VALUE = (int32_t)0x80000000;
std::shared_ptr<Class<Integer>> Integer::TYPE = nullptr; // todo
const int32_t Integer::SIZE = 32;
const int32_t Integer::BYTES = SIZE / Byte::SIZE; /* NOLINT */

Integer::Integer(int32_t value) : value(value) {}

Integer::Integer(const std::shared_ptr<String> &s) : value(parseInt(s, 10)) {}

int32_t Integer::bitCount(int32_t i) { // todo
    return 0;
}

int8_t Integer::byteValue() const {
    return (int8_t)value;
}

int32_t Integer::compare(int32_t x, int32_t y) {
    return (x < y) ? -1 : ((x == y) ? 0 : 1);
}

int32_t Integer::compareTo(const std::shared_ptr<Integer> &anotherInteger) const {
    return compare(this->value, anotherInteger->value);
}

int32_t Integer::compareUnsigned(int32_t x, int32_t y) {
    return compare(x + MIN_VALUE, y + MIN_VALUE);
}

std::shared_ptr<Integer> Integer::decode(const std::shared_ptr<String> &nm) { // todo
    return nullptr;
}

int32_t Integer::divideUnsigned(int32_t dividend, int32_t divisor) {
    return (int32_t)(toUnsignedLong(dividend) / toUnsignedLong(divisor));
}

double Integer::doubleValue() const {
    return (double)value;
}

bool Integer::equals(const std::shared_ptr<Object> &obj) const {
    if (std::dynamic_pointer_cast<Integer>(obj))
        return value == std::dynamic_pointer_cast<Integer>(obj)->intValue();
    return false;
}

float Integer::floatValue() const {
    return (float)value;
}

std::shared_ptr<Integer> Integer::getInteger(const std::shared_ptr<String> &nm) {
    return getInteger(nm, nullptr);
}

std::shared_ptr<Integer> Integer::getInteger(const std::shared_ptr<String> &nm, int32_t val) {
    auto result = getInteger(nm, nullptr);
    return (result == nullptr) ? Integer::valueOf(val) : result;
}

std::shared_ptr<Integer> Integer::getInteger(const std::shared_ptr<String> &nm, const std::shared_ptr<Integer> &val) { // todo
    return nullptr;
}

int32_t Integer::hashCode() const {
    return Integer::hashCode(value);
}

int32_t Integer::hashCode(int32_t value) {
    return value;
}

int32_t Integer::highestOneBit(int32_t i) { // todo
    return 0;
}

int32_t Integer::intValue() const {
    return value;
}

int64_t Integer::longValue() const {
    return (int64_t)value;
}

int32_t Integer::lowestOneBit(int32_t i) {
    return i & -i;
}

int32_t Integer::max(int32_t a, int32_t b) { // todo
    return 0;
}

int32_t Integer::min(int32_t a, int32_t b) { // todo
    return 0;
}

int32_t Integer::numberOfLeadingZeros(int32_t i) { // todo
    return 0;
}

int32_t Integer::numberOfTrailingZeros(int32_t i) { // todo
    return 0;
}

int32_t Integer::parseInt(const std::shared_ptr<String> &s) {
    return parseInt(s, 10);
}

int32_t Integer::parseInt(const std::shared_ptr<String> &s, int32_t radix) { // todo
    return 0;
}

int32_t Integer::parseUnsignedInt(const std::shared_ptr<String> &s) {
    return parseUnsignedInt(s, 10);
}

int32_t Integer::parseUnsignedInt(const std::shared_ptr<String> &s, int32_t radix) { // todo
    return 0;
}

int32_t Integer::remainderUnsigned(int32_t dividend, int32_t divisor) {
    return (int32_t)(toUnsignedLong(dividend) % toUnsignedLong(divisor));
}

int32_t Integer::reverse(int32_t i) { // todo
    return 0;
}

int32_t Integer::reverseBytes(int32_t i) { // todo
    return 0;
}

int32_t Integer::rotateLeft(int32_t i, int32_t distance) { // todo
    return 0;
}

int32_t Integer::rotateRight(int32_t i, int32_t distance) { // todo
    return 0;
}

int16_t Integer::shortValue() const {
    return (int16_t)value;
}

int32_t Integer::signum(int32_t i) { // todo
    return 0;
}

int32_t Integer::sum(int32_t a, int32_t b) {
    return a + b;
}

std::shared_ptr<String> Integer::toBinaryString(int32_t i) { // todo
    return nullptr;
}

std::shared_ptr<String> Integer::toHexString(int32_t i) { // todo
    return nullptr;
}

std::shared_ptr<String> Integer::toOctalString(int32_t i) { // todo
    return nullptr;
}

std::shared_ptr<String> Integer::toString() const {
    return toString(value);
}

std::shared_ptr<String> Integer::toString(int32_t i) { // todo
    return nullptr;
}

std::shared_ptr<String> Integer::toString(int32_t i, int32_t radix) { // todo
    return nullptr;
}

int64_t Integer::toUnsignedLong(int32_t x) {
    return ((int64_t)x) & 0xffffffffLL;
}

std::shared_ptr<String> Integer::toUnsignedString(int32_t i) { // todo
    return nullptr;
}

std::shared_ptr<String> Integer::toUnsignedString(int32_t i, int32_t radix) { // todo
    return nullptr;
}

std::shared_ptr<Integer> Integer::valueOf(int32_t i) { // todo
    return nullptr;
}

std::shared_ptr<Integer> Integer::valueOf(const std::shared_ptr<String> &s) {
    return Integer::valueOf(parseInt(s, 10));
}

std::shared_ptr<Integer> Integer::valueOf(const std::shared_ptr<String> &s, int32_t radix) {
    return Integer::valueOf(parseInt(s, radix));
}
