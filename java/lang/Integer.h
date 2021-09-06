//
// Created by 艾峥鹏 on 2021/8/16.
//

#ifndef OPENCDK_INTEGER_H
#define OPENCDK_INTEGER_H

#include <java/lang/Number.h>
#include <java/lang/Comparable.h>


class Integer final : public Number, public Comparable<Integer> {
    const int32_t value;

public:
    static const int32_t BYTES;
    static const int32_t MAX_VALUE;
    static const int32_t MIN_VALUE;
    static const int32_t SIZE;
    static std::shared_ptr<Class<Integer>> TYPE;
    explicit Integer(int32_t value);
    explicit Integer(const std::shared_ptr<String> &s);
    static int32_t bitCount(int32_t i);
    [[nodiscard]] int8_t byteValue() const override;
    static int32_t compare(int32_t x, int32_t y);
    [[nodiscard]] int32_t compareTo(const std::shared_ptr<Integer> &anotherInteger) const override;
    static int32_t compareUnsigned(int32_t x, int32_t y);
    static std::shared_ptr<Integer> decode(const std::shared_ptr<String> &nm);
    static int32_t divideUnsigned(int32_t dividend, int32_t divisor);
    [[nodiscard]] double doubleValue() const override;
    [[nodiscard]] bool equals(const std::shared_ptr<Object> &obj) const override;
    [[nodiscard]] float floatValue() const override;
    static std::shared_ptr<Integer> getInteger(const std::shared_ptr<String> &nm);
    static std::shared_ptr<Integer> getInteger(const std::shared_ptr<String> &nm, int32_t val);
    static std::shared_ptr<Integer> getInteger(const std::shared_ptr<String> &nm, const std::shared_ptr<Integer> &val);
    [[nodiscard]] int32_t hashCode() const override;
    static int32_t hashCode(int32_t value);
    static int32_t highestOneBit(int32_t i);
    [[nodiscard]] int32_t intValue() const override;
    [[nodiscard]] int64_t longValue() const override;
    static int32_t lowestOneBit(int32_t i);
    static int32_t max(int32_t a, int32_t b);
    static int32_t min(int32_t a, int32_t b);
    static int32_t numberOfLeadingZeros(int32_t i);
    static int32_t numberOfTrailingZeros(int32_t i);
    static int32_t parseInt(const std::shared_ptr<String> &s);
    static int32_t parseInt(const std::shared_ptr<String> &s, int32_t radix);
    static int32_t parseUnsignedInt(const std::shared_ptr<String> &s);
    static int32_t parseUnsignedInt(const std::shared_ptr<String> &s, int32_t radix);
    static int32_t remainderUnsigned(int32_t dividend, int32_t divisor);
    static int32_t reverse(int32_t i);
    static int32_t reverseBytes(int32_t i);
    static int32_t rotateLeft(int32_t i, int32_t distance);
    static int32_t rotateRight(int32_t i, int32_t distance);
    [[nodiscard]] int16_t shortValue() const override;
    static int32_t signum(int32_t i);
    static int32_t sum(int32_t a, int32_t b);
    static std::shared_ptr<String> toBinaryString(int32_t i);
    static std::shared_ptr<String> toHexString(int32_t i);
    static std::shared_ptr<String> toOctalString(int32_t i);
    [[nodiscard]] std::shared_ptr<String> toString() const override;
    static std::shared_ptr<String> toString(int32_t i);
    static std::shared_ptr<String> toString(int32_t i, int32_t radix);
    static int64_t toUnsignedLong(int32_t x);
    static std::shared_ptr<String> toUnsignedString(int32_t i);
    static std::shared_ptr<String> toUnsignedString(int32_t i, int32_t radix);
    static std::shared_ptr<Integer> valueOf(int32_t i);
    static std::shared_ptr<Integer> valueOf(const std::shared_ptr<String> &s);
    static std::shared_ptr<Integer> valueOf(const std::shared_ptr<String> &s, int32_t radix);
};


#endif //OPENCDK_INTEGER_H
