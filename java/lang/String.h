//
// Created by 艾峥鹏 on 2021/8/16.
//

#ifndef OPENCDK_STRING_H
#define OPENCDK_STRING_H

#include <java/lang/Object.h>
#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>
#include <java/lang/CharSequence.h>
#include <string>

template <class T> class Comparator;


class String final : public Object, public Serializable, public Comparable<String>, public CharSequence {
    std::u16string value;
    static int32_t indexOf(const std::u16string &source, int32_t sourceOffset, int32_t sourceCount, const std::shared_ptr<String> &target, int32_t fromIndex);
    static int32_t indexOf(const std::u16string &source, int32_t sourceOffset, int32_t sourceCount, const std::u16string &target, int32_t targetOffset, int32_t targetCount, int32_t fromIndex);
    static int32_t lastIndexOf(const std::u16string &source, int32_t sourceOffset, int32_t sourceCount, const std::shared_ptr<String> &target, int32_t fromIndex);
    static int32_t lastIndexOf(const std::u16string &source, int32_t sourceOffset, int32_t sourceCount, const std::u16string &target, int32_t targetOffset, int32_t targetCount, int32_t fromIndex);

public:
    static std::shared_ptr<Comparator<String>> CASE_INSENSITIVE_ORDER;
    String();
    // String * 8
    explicit String(std::u16string value);
    String(const std::u16string &value, int32_t offset, int32_t count);
    // String
    explicit String(const std::shared_ptr<String> &original);
    // String *2
    [[nodiscard]] char16_t charAt(int32_t index) const override;
    // codePoint * 3
    [[nodiscard]] int32_t compareTo(const std::shared_ptr<String> &anotherString) const override;
    [[nodiscard]] virtual int32_t compareToIgnoreCase(const std::shared_ptr<String> &str) const;
    [[nodiscard]] virtual std::shared_ptr<String> concat(const std::shared_ptr<String> &str) const;
    [[nodiscard]] virtual bool contains(const std::shared_ptr<CharSequence> &s) const;
    [[nodiscard]] virtual bool contentEquals(const std::shared_ptr<CharSequence> &s) const;
    // contentEquals
    static std::shared_ptr<String> copyValueOf(const std::u16string &data);
    static std::shared_ptr<String> copyValueOf(const std::u16string &data, int32_t offset, int32_t count);
    [[nodiscard]] virtual bool endsWith(const std::shared_ptr<String> &suffix) const;
    [[nodiscard]] bool equals(const std::shared_ptr<Object> &anObject) const override;
    [[nodiscard]] virtual bool equalsIgnoreCase(const std::shared_ptr<String> &anotherString) const;
    // format
    static std::shared_ptr<String> format(const std::shared_ptr<String> &format, const std::initializer_list<std::shared_ptr<Object>> &args);
    // getBytes * 4
    virtual void getChars(int32_t srcBegin, int32_t srcEnd, std::u16string &dst, int32_t dstBegin) const;
    [[nodiscard]] int32_t hashCode() const override;
    [[nodiscard]] virtual int32_t indexOf(int32_t ch) const;
    [[nodiscard]] virtual int32_t indexOf(int32_t ch, int32_t fromIndex) const;
    [[nodiscard]] virtual int32_t indexOf(const std::shared_ptr<String> &str) const;
    [[nodiscard]] virtual int32_t indexOf(const std::shared_ptr<String> &str, int32_t fromIndex) const;
    [[nodiscard]] virtual std::shared_ptr<String> intern() const;
    [[nodiscard]] virtual bool isEmpty() const;
    static std::shared_ptr<String> join(const std::shared_ptr<CharSequence> &delimiter, const std::initializer_list<CharSequence> &elements);
    // join
    [[nodiscard]] virtual int32_t lastIndexOf(int32_t ch) const;
    [[nodiscard]] virtual int32_t lastIndexOf(int32_t ch, int32_t fromIndex) const;
    [[nodiscard]] virtual int32_t lastIndexOf(const std::shared_ptr<String> &str) const;
    [[nodiscard]] virtual int32_t lastIndexOf(const std::shared_ptr<String> &str, int32_t fromIndex) const;
    [[nodiscard]] int32_t length() const override;
    [[nodiscard]] virtual bool matches(const std::shared_ptr<String> &regex) const;
    // offsetByCodePoints
    [[nodiscard]] virtual bool regionMatches(bool ignoreCase, int32_t toffset, const std::shared_ptr<String> &other, int32_t ooffset, int32_t len) const;
    [[nodiscard]] virtual bool regionMatches(int32_t toffset, const std::shared_ptr<String> &other, int32_t ooffset, int32_t len) const;
    [[nodiscard]] virtual std::shared_ptr<String> replace(char16_t oldChar, char16_t newChar) const;
    [[nodiscard]] virtual std::shared_ptr<String> replace(const std::shared_ptr<CharSequence> &target, const std::shared_ptr<CharSequence> &replacement) const;
    [[nodiscard]] virtual std::shared_ptr<String> replaceAll(const std::shared_ptr<String> &regex, const std::shared_ptr<String> &replacement) const;
    [[nodiscard]] virtual std::shared_ptr<String> replaceFirst(const std::shared_ptr<String> &regex, const std::shared_ptr<String> &replacement) const;
    [[nodiscard]] virtual std::vector<std::shared_ptr<String>> split(const std::shared_ptr<String> &regex) const;
    [[nodiscard]] virtual std::vector<std::shared_ptr<String>> split(const std::shared_ptr<String> &regex, int32_t limit) const;
    [[nodiscard]] virtual bool startsWith(const std::shared_ptr<String> &prefix) const;
    [[nodiscard]] virtual bool startsWith(const std::shared_ptr<String> &prefix, int32_t toffset) const;
    [[nodiscard]] std::shared_ptr<CharSequence> subSequence(int32_t beginIndex, int32_t endIndex) const override;
    [[nodiscard]] virtual std::shared_ptr<String> substring(int32_t beginIndex) const;
    [[nodiscard]] virtual std::shared_ptr<String> substring(int32_t beginIndex, int32_t endIndex) const;
    [[nodiscard]] virtual std::u16string toCharArray() const;
    [[nodiscard]] virtual std::shared_ptr<String> toLowerCase() const;
    // toLowerCase
    [[nodiscard]] std::shared_ptr<String> toString() const override;
    [[nodiscard]] virtual std::shared_ptr<String> toUpperCase() const;
    // toUpperCase
    [[nodiscard]] virtual std::shared_ptr<String> trim() const;
    static std::shared_ptr<String> valueOf(bool b);
    static std::shared_ptr<String> valueOf(char16_t c);
    static std::shared_ptr<String> valueOf(const std::u16string &data);
    static std::shared_ptr<String> valueOf(const std::u16string &data, int32_t offset, int32_t count);
    static std::shared_ptr<String> valueOf(double d);
    static std::shared_ptr<String> valueOf(float f);
    static std::shared_ptr<String> valueOf(int32_t i);
    static std::shared_ptr<String> valueOf(int64_t l);
    static std::shared_ptr<String> valueOf(const std::shared_ptr<Object> &obj);
};


#endif //OPENCDK_STRING_H
