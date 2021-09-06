//
// Created by 艾峥鹏 on 2021/8/16.
//

#include "String.h"
#include <utility>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/Math.h>

String::String() {}

String::String(std::u16string value) : value(std::move(value)) {}

String::String(const std::u16string &value, int32_t offset, int32_t count) {
    if (offset < 0)
        throw std::make_shared<StringIndexOutOfBoundsException>(offset); /* NOLINT */
    if (count <= 0) {
        if (count < 0)
            throw std::make_shared<StringIndexOutOfBoundsException>(count); /* NOLINT */
        if (offset <= value.length()) {
            this->value = u"";
            return;
        }
    }
    if (offset > value.length() - count)
        throw std::make_shared<StringIndexOutOfBoundsException>(offset + count); /* NOLINT */
    this->value = std::u16string(value, offset, count);
}

String::String(const std::shared_ptr<String> &original) : value(original->value) {}

char16_t String::charAt(int32_t index) const {
    if ((index < 0) || (index >= value.length()))
        throw std::make_shared<StringIndexOutOfBoundsException>(index); /* NOLINT */
    return value[index];
}

int32_t String::compareTo(const std::shared_ptr<String> &anotherString) const {
    auto len1 = (int32_t)value.length();
    auto len2 = (int32_t)anotherString->value.length();
    int32_t lim = Math::min(len1, len2);
    const std::u16string &v1 = value;
    const std::u16string &v2  = anotherString->value;
    int32_t k = 0;
    while (k < lim) {
        char16_t c1 = v1[k];
        char16_t c2 = v2[k];
        if (c1 != c2)
            return c1 - c2;
        k++;
    }
    return len1 - len2;
}

int32_t String::compareToIgnoreCase(const std::shared_ptr<String> &str) const { // todo
    return 0;
}

std::shared_ptr<String> String::concat(const std::shared_ptr<String> &str) const {
    return nullptr;
}

bool String::contains(const std::shared_ptr<CharSequence> &s) const {
    return false;
}

bool String::contentEquals(const std::shared_ptr<CharSequence> &s) const { // todo
    return false;
}

std::shared_ptr<String> String::copyValueOf(const std::u16string &data) {
    return nullptr;
}

std::shared_ptr<String> String::copyValueOf(const std::u16string &data, int32_t offset, int32_t count) {
    return nullptr;
}

bool String::endsWith(const std::shared_ptr<String> &suffix) const {
    return startsWith(suffix, (int32_t)(value.length() - suffix->value.length()));
}

bool String::equals(const std::shared_ptr<Object> &anObject) const {
    if (this == anObject.get())
        return true;
    if (std::dynamic_pointer_cast<String>(anObject)) {
        auto anotherString = std::dynamic_pointer_cast<String>(anObject);
        auto n = (int32_t)value.length();
        if (n == anotherString->value.length()) {
            const std::u16string &v1 = value;
            const std::u16string &v2 = anotherString->value;
            int32_t i = 0;
            while (n-- != 0) {
                if (v1[i] != v2[i])
                    return false;
                i++;
            }
            return true;
        }
    }
    return false;
}

bool String::equalsIgnoreCase(const std::shared_ptr<String> &anotherString) const {
    return (this == anotherString.get()) ||
           (anotherString != nullptr) && (anotherString->value.length() == value.length()) &&
           regionMatches(true, 0, anotherString, 0, (int32_t)value.length());
}

std::shared_ptr<String>
String::format(const std::shared_ptr<String> &format, const std::initializer_list<std::shared_ptr<Object>> &args) {
    return nullptr;
}

void String::getChars(int32_t srcBegin, int32_t srcEnd, std::u16string &dst, int32_t dstBegin) const { // todo
    if (srcBegin < 0)
        throw std::make_shared<StringIndexOutOfBoundsException>(srcBegin); /* NOLINT */
    if (srcEnd > value.length())
        throw std::make_shared<StringIndexOutOfBoundsException>(srcEnd); /* NOLINT */
    if (srcBegin > srcEnd)
        throw std::make_shared<StringIndexOutOfBoundsException>(srcEnd - srcBegin); /* NOLINT */
    dst = dst.substr(0, dstBegin) + value.substr(srcBegin, srcEnd - srcBegin);
}

int32_t String::hashCode() const {
    int32_t h = 0;
    if (value.length() > 0) {
        const std::u16string &val = value;
        for (int i = 0; i < value.length(); i++)
            h = 31 * h + val[i];
    }
    return h;
}

int32_t String::indexOf(int32_t ch) const {
    return indexOf(ch, 0);
}

int32_t String::indexOf(int32_t ch, int32_t fromIndex) const { // todo
    return 0;
}

int32_t String::indexOf(const std::shared_ptr<String> &str) const {
    return indexOf(str, 0);
}

int32_t String::indexOf(const std::shared_ptr<String> &str, int32_t fromIndex) const {
    return indexOf(value, 0, (int32_t)value.length(), str->value, 0, (int32_t)str->value.length(), fromIndex);
}

std::shared_ptr<String> String::intern() const {
    return nullptr;
}

bool String::isEmpty() const {
    return value.length() == 0;
}

std::shared_ptr<String>
String::join(const std::shared_ptr<CharSequence> &delimiter, const std::initializer_list<CharSequence> &elements) {
    return nullptr;
}

int32_t String::lastIndexOf(int32_t ch) const {
    return lastIndexOf(ch, (int32_t)value.length() - 1);
}

int32_t String::lastIndexOf(int32_t ch, int32_t fromIndex) const { // todo
    return 0;
}

int32_t String::lastIndexOf(const std::shared_ptr<String> &str) const {
    return lastIndexOf(str, (int32_t)value.length());
}

int32_t String::lastIndexOf(const std::shared_ptr<String> &str, int32_t fromIndex) const {
    return lastIndexOf(value, 0, (int32_t)value.length(), str->value, 0, (int32_t)str->value.length(), fromIndex);
}

int32_t String::length() const {
    return (int32_t)value.length();
}

bool String::matches(const std::shared_ptr<String> &regex) const {
    return false;
}

bool String::regionMatches(bool ignoreCase, int32_t toffset, const std::shared_ptr<String> &other, int32_t ooffset, int32_t len) const { // todo
    return false;
}

bool String::regionMatches(int32_t toffset, const std::shared_ptr<String> &other, int32_t ooffset, int32_t len) const {
    const std::u16string &ta = value;
    int32_t to = toffset;
    const std::u16string &pa = other->value;
    int32_t po = ooffset;
    if ((ooffset < 0) || (toffset < 0) || (toffset > (int64_t)value.length() - len) || (ooffset > (int64_t)other->value.length() - len))
        return false;
    while (len-- > 0)
        if (ta[to++] != pa[po++])
            return false;
    return true;
}

std::shared_ptr<String> String::replace(char16_t oldChar, char16_t newChar) const {
    return nullptr;
}

std::shared_ptr<String>
String::replace(const std::shared_ptr<CharSequence> &target, const std::shared_ptr<CharSequence> &replacement) const {
    return nullptr;
}

std::shared_ptr<String>
String::replaceAll(const std::shared_ptr<String> &regex, const std::shared_ptr<String> &replacement) const {
    return nullptr;
}

std::shared_ptr<String>
String::replaceFirst(const std::shared_ptr<String> &regex, const std::shared_ptr<String> &replacement) const {
    return nullptr;
}

std::vector<std::shared_ptr<String>> String::split(const std::shared_ptr<String> &regex) const {
    return {};
}

std::vector<std::shared_ptr<String>> String::split(const std::shared_ptr<String> &regex, int32_t limit) const {
    return {};
}

bool String::startsWith(const std::shared_ptr<String> &prefix) const {
    return startsWith(prefix, 0);
}

bool String::startsWith(const std::shared_ptr<String> &prefix, int32_t toffset) const {
    const std::u16string &ta = value;
    int32_t to = toffset;
    const std::u16string &pa = prefix->value;
    int32_t po = 0;
    auto pc = (int32_t)prefix->value.length();
    if ((toffset < 0) || (toffset > value.length() - pc))
        return false;
    while (--pc >= 0)
        if (ta[to++] != pa[po++])
            return false;
    return true;
}

std::shared_ptr<CharSequence> String::subSequence(int32_t beginIndex, int32_t endIndex) const {
    return this->substring(beginIndex, endIndex);
}

std::shared_ptr<String> String::substring(int32_t beginIndex) const {
    if (beginIndex < 0)
        throw std::make_shared<StringIndexOutOfBoundsException>(beginIndex); /* NOLINT */
    int32_t subLen = (int32_t)value.length() - beginIndex;
    if (subLen < 0)
        throw std::make_shared<StringIndexOutOfBoundsException>(subLen); /* NOLINT */
    return (beginIndex == 0) ? std::make_shared<String>(*this) : std::make_shared<String>(value, beginIndex, subLen);
}

std::shared_ptr<String> String::substring(int32_t beginIndex, int32_t endIndex) const {
    if (beginIndex < 0)
        throw std::make_shared<StringIndexOutOfBoundsException>(beginIndex); /* NOLINT */
    if (endIndex > value.length())
        throw std::make_shared<StringIndexOutOfBoundsException>(endIndex); /* NOLINT */
    int32_t subLen = endIndex - beginIndex;
    if (subLen < 0)
        throw std::make_shared<StringIndexOutOfBoundsException>(subLen); /* NOLINT */
    return ((beginIndex == 0) && (endIndex == value.length())) ? std::make_shared<String>(*this) : std::make_shared<String>(value, beginIndex, subLen);
}

std::u16string String::toCharArray() const {
    return {};
}

std::shared_ptr<String> String::toLowerCase() const {
    return nullptr;
}

std::shared_ptr<String> String::toString() const {
    return std::make_shared<String>(*this);
}

std::shared_ptr<String> String::toUpperCase() const {
    return nullptr;
}

std::shared_ptr<String> String::trim() const {
    return nullptr;
}

std::shared_ptr<String> String::valueOf(bool b) {
    return nullptr;
}

std::shared_ptr<String> String::valueOf(char16_t c) {
    return nullptr;
}

std::shared_ptr<String> String::valueOf(const std::u16string &data) {
    return nullptr;
}

std::shared_ptr<String> String::valueOf(const std::u16string &data, int32_t offset, int32_t count) {
    return nullptr;
}

std::shared_ptr<String> String::valueOf(double d) {
    return nullptr;
}

std::shared_ptr<String> String::valueOf(float f) {
    return nullptr;
}

std::shared_ptr<String> String::valueOf(int32_t i) {
    return nullptr;
}

std::shared_ptr<String> String::valueOf(int64_t l) {
    return nullptr;
}

std::shared_ptr<String> String::valueOf(const std::shared_ptr<Object> &obj) {
    return nullptr;
}

int32_t String::indexOf(const std::u16string &source, int32_t sourceOffset, int32_t sourceCount, const std::shared_ptr<String> &target, int32_t fromIndex) {
    return indexOf(source, sourceOffset, sourceCount, target->value, 0, (int32_t)target->value.length(), fromIndex);
}

int32_t String::indexOf(const std::u16string &source, int32_t sourceOffset, int32_t sourceCount, const std::u16string &target, int32_t targetOffset, int32_t targetCount, int32_t fromIndex) {
    if (fromIndex >= sourceCount)
        return (targetCount == 0 ? sourceCount : -1);
    if (fromIndex < 0)
        fromIndex = 0;
    if (targetCount == 0)
        return fromIndex;
    char16_t first = target[targetOffset];
    int32_t max = sourceOffset + (sourceCount - targetCount);
    for (int32_t i = sourceOffset + fromIndex; i <= max; i++) {
        if (source[i] != first)
            while (++i <= max && source[i] != first);
        if (i <= max) {
            int32_t j = i + 1;
            int32_t end = j + targetCount - 1;
            for (int32_t k = targetOffset + 1; j < end && source[j] == target[k]; j++, k++);
            if (j == end)
                return i - sourceOffset;
        }
    }
    return -1;
}

int32_t String::lastIndexOf(const std::u16string &source, int32_t sourceOffset, int32_t sourceCount, const std::shared_ptr<String> &target, int32_t fromIndex) {
    return lastIndexOf(source, sourceOffset, sourceCount, target->value, 0, (int32_t)target->value.length(), fromIndex);
}

int32_t String::lastIndexOf(const std::u16string &source, int32_t sourceOffset, int32_t sourceCount, const std::u16string &target, int32_t targetOffset, int32_t targetCount, int32_t fromIndex) {
    int32_t rightIndex = sourceCount - targetCount;
    if (fromIndex < 0)
        return -1;
    if (fromIndex > rightIndex)
        fromIndex = rightIndex;
    if (targetCount == 0)
        return fromIndex;
    int32_t strLastIndex = targetOffset + targetCount - 1;
    char16_t strLastChar = target[strLastIndex];
    int32_t min = sourceOffset + targetCount - 1;
    int32_t i = min + fromIndex;
startSearchForLastChar:
    while (true) {
        while (i >= min && source[i] != strLastChar)
            i--;
        if (i < min)
            return -1;
        int32_t j = i - 1;
        int32_t start = j - (targetCount - 1);
        int32_t k = strLastIndex - 1;
        while (j > start) {
            if (source[j--] != target[k--]) {
                i--;
                goto startSearchForLastChar; // continue?
            }
        }
        return start - sourceOffset + 1;
    }
}
