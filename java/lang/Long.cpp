//
// Created by 艾峥鹏 on 2021/8/16.
//

#include "Long.h"
#include <java/lang/Byte.h>

const int64_t Long::MAX_VALUE = 0x7fffffffffffffffLL;
const int64_t Long::MIN_VALUE = (int64_t)0x8000000000000000LL;
std::shared_ptr<Class<Long>> Long::TYPE = nullptr; // todo
const int32_t Long::SIZE = 64;
const int32_t Long::BYTES = SIZE / Byte::SIZE; /* NOLINT */

Long::Long(int64_t value) : value(value) {}

Long::Long(const std::shared_ptr<String> &s) : value(parseLong(s, 10)) {}

int32_t Long::bitCount(int64_t i) { // todo
    return 0;
}

int8_t Long::byteValue() const {
    return (int8_t)value;
}

int32_t Long::compare(int64_t x, int64_t y) {
    return (x < y) ? -1 : ((x == y) ? 0 : 1);
}

int32_t Long::compareTo(const std::shared_ptr<Long> &anotherLong) const {
    return compare(this->value, anotherLong->value);
}

int32_t Long::compareUnsigned(int64_t x, int64_t y) {
    return compare(x + MIN_VALUE, y + MIN_VALUE);
}

std::shared_ptr<Long> Long::decode(const std::shared_ptr<String> &nm) { // todo
    return nullptr;
}

int64_t Long::divideUnsigned(int64_t dividend, int64_t divisor) { // todo
    return 0;
}

double Long::doubleValue() const {
    return (double)value;
}

bool Long::equals(const std::shared_ptr<Object> &obj) const {
    if (std::dynamic_pointer_cast<Long>(obj))
        return value == std::dynamic_pointer_cast<Long>(obj)->longValue();
    return false;
}

float Long::floatValue() const {
    return (float)value;
}

std::shared_ptr<Long> Long::getLong(const std::shared_ptr<String> &nm) {
    return getLong(nm, nullptr);
}

std::shared_ptr<Long> Long::getLong(const std::shared_ptr<String> &nm, int64_t val) {
    auto result = Long::getLong(nm, nullptr);
    return (result == nullptr) ? Long::valueOf(val) : result;
}

std::shared_ptr<Long> Long::getLong(const std::shared_ptr<String> &nm, const std::shared_ptr<Long> &val) { // todo
    return nullptr;
}

int32_t Long::hashCode() const {
    return Long::hashCode(value);
}

int32_t Long::hashCode(int64_t value) { // todo
    return 0;
}

int64_t Long::highestOneBit(int64_t i) { // todo
    return 0;
}

int32_t Long::intValue() const {
    return (int32_t)value;
}

int64_t Long::longValue() const {
    return value;
}

int64_t Long::lowestOneBit(int64_t i) {
    return i & -i;
}

int64_t Long::max(int64_t a, int64_t b) { // todo
    return 0;
}

int64_t Long::min(int64_t a, int64_t b) { // todo
    return 0;
}

int32_t Long::numberOfLeadingZeros(int64_t i) { // todo
    return 0;
}

int32_t Long::numberOfTrailingZeros(int64_t i) { // todo
    return 0;
}

int64_t Long::parseLong(const std::shared_ptr<String> &s) {
    return parseLong(s, 10);
}

int64_t Long::parseLong(const std::shared_ptr<String> &s, int32_t radix) { // todo
    return 0;
}

int64_t Long::parseUnsignedLong(const std::shared_ptr<String> &s) {
    return parseUnsignedLong(s, 10);
}

int64_t Long::parseUnsignedLong(const std::shared_ptr<String> &s, int32_t radix) { // todo
    return 0;
}

int64_t Long::remainderUnsigned(int64_t dividend, int64_t divisor) { // todo
    return 0;
}

int64_t Long::reverse(int64_t i) { // todo
    return 0;
}

int64_t Long::reverseBytes(int64_t i) { // todo
    return 0;
}

int64_t Long::rotateLeft(int64_t i, int32_t distance) { // todo
    return 0;
}

int64_t Long::rotateRight(int64_t i, int32_t distance) { // todo
    return 0;
}

int16_t Long::shortValue() const {
    return (int16_t)value;
}

int32_t Long::signum(int64_t i) { // todo
    return 0;
}

int64_t Long::sum(int64_t a, int64_t b) {
    return a + b;
}

std::shared_ptr<String> Long::toBinaryString(int64_t i) { // todo
    return nullptr;
}

std::shared_ptr<String> Long::toHexString(int64_t i) { // todo
    return nullptr;
}

std::shared_ptr<String> Long::toOctalString(int64_t i) { // todo
    return nullptr;
}

std::shared_ptr<String> Long::toString() const {
    return toString(value);
}

std::shared_ptr<String> Long::toString(int64_t i) { // todo
    return nullptr;
}

std::shared_ptr<String> Long::toString(int64_t i, int32_t radix) { // todo
    return nullptr;
}

int64_t Long::toUnsignedLong(int64_t x) {
    return 0;
}

std::shared_ptr<String> Long::toUnsignedString(int64_t i) {
    return toUnsignedString(i, 10);
}

std::shared_ptr<String> Long::toUnsignedString(int64_t i, int32_t radix) { // todo
    return nullptr;
}

std::shared_ptr<Long> Long::valueOf(int64_t l) { // todo
    return nullptr;
}

std::shared_ptr<Long> Long::valueOf(const std::shared_ptr<String> &s) {
    return Long::valueOf(parseLong(s, 10));
}

std::shared_ptr<Long> Long::valueOf(const std::shared_ptr<String> &s, int32_t radix) {
    return Long::valueOf(parseLong(s, radix));
}
