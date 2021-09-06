//
// Created by 艾峥鹏 on 2021/8/16.
//

#ifndef OPENCDK_LONG_H
#define OPENCDK_LONG_H

#include <java/lang/Number.h>
#include <java/lang/Comparable.h>


class Long final : public Number, public Comparable<Long> {
    const int64_t value;

public:
    static const int32_t BYTES;
    static const int64_t MAX_VALUE;
    static const int64_t MIN_VALUE;
    static const int32_t SIZE;
    static std::shared_ptr<Class<Long>> TYPE;
    explicit Long(int64_t value);
    explicit Long(const std::shared_ptr<String> &s);
    static int32_t bitCount(int64_t i);
    [[nodiscard]] int8_t byteValue() const override;
    static int32_t compare(int64_t x, int64_t y);
    [[nodiscard]] int32_t compareTo(const std::shared_ptr<Long> &anotherLong) const override;
    static int32_t compareUnsigned(int64_t x, int64_t y);
    static std::shared_ptr<Long> decode(const std::shared_ptr<String> &nm);
    static int64_t divideUnsigned(int64_t dividend, int64_t divisor);
    [[nodiscard]] double doubleValue() const override;
    [[nodiscard]] bool equals(const std::shared_ptr<Object> &obj) const override;
    [[nodiscard]] float floatValue() const override;
    static std::shared_ptr<Long> getLong(const std::shared_ptr<String> &nm);
    static std::shared_ptr<Long> getLong(const std::shared_ptr<String> &nm, int64_t val);
    static std::shared_ptr<Long> getLong(const std::shared_ptr<String> &nm, const std::shared_ptr<Long> &val);
    [[nodiscard]] int32_t hashCode() const override;
    static int32_t hashCode(int64_t value);
    static int64_t highestOneBit(int64_t i);
    [[nodiscard]] int32_t intValue() const override;
    [[nodiscard]] int64_t longValue() const override;
    static int64_t lowestOneBit(int64_t i);
    static int64_t max(int64_t a, int64_t b);
    static int64_t min(int64_t a, int64_t b);
    static int32_t numberOfLeadingZeros(int64_t i);
    static int32_t numberOfTrailingZeros(int64_t i);
    static int64_t parseLong(const std::shared_ptr<String> &s);
    static int64_t parseLong(const std::shared_ptr<String> &s, int32_t radix);
    static int64_t parseUnsignedLong(const std::shared_ptr<String> &s);
    static int64_t parseUnsignedLong(const std::shared_ptr<String> &s, int32_t radix);
    static int64_t remainderUnsigned(int64_t dividend, int64_t divisor);
    static int64_t reverse(int64_t i);
    static int64_t reverseBytes(int64_t i);
    static int64_t rotateLeft(int64_t i, int32_t distance);
    static int64_t rotateRight(int64_t i, int32_t distance);
    [[nodiscard]] int16_t shortValue() const override;
    static int32_t signum(int64_t i);
    static int64_t sum(int64_t a, int64_t b);
    static std::shared_ptr<String> toBinaryString(int64_t i);
    static std::shared_ptr<String> toHexString(int64_t i);
    static std::shared_ptr<String> toOctalString(int64_t i);
    [[nodiscard]] std::shared_ptr<String> toString() const override;
    static std::shared_ptr<String> toString(int64_t i);
    static std::shared_ptr<String> toString(int64_t i, int32_t radix);
    static int64_t toUnsignedLong(int64_t x);
    static std::shared_ptr<String> toUnsignedString(int64_t i);
    static std::shared_ptr<String> toUnsignedString(int64_t i, int32_t radix);
    static std::shared_ptr<Long> valueOf(int64_t l);
    static std::shared_ptr<Long> valueOf(const std::shared_ptr<String> &s);
    static std::shared_ptr<Long> valueOf(const std::shared_ptr<String> &s, int32_t radix);
};


#endif //OPENCDK_LONG_H
