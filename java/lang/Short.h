//
// Created by 艾峥鹏 on 2021/8/15.
//

#ifndef OPENCDK_SHORT_H
#define OPENCDK_SHORT_H

#include <java/lang/Number.h>
#include <java/lang/Comparable.h>


class Short final : public Number, public Comparable<Short> {
    const int16_t value;

public:
    static const int32_t BYTES;
    static const int16_t MAX_VALUE;
    static const int16_t MIN_VALUE;
    static const int32_t SIZE;
    static std::shared_ptr<Class<Short>> TYPE;
    explicit Short(int16_t value);
    explicit Short(const std::shared_ptr<String> &s);
    [[nodiscard]] int8_t byteValue() const override;
    static int32_t compare(int16_t x, int16_t y);
    [[nodiscard]] int32_t compareTo(const std::shared_ptr<Short> &anotherShort) const override;
    static std::shared_ptr<Short> decode(const std::shared_ptr<String> &nm);
    [[nodiscard]] double doubleValue() const override;
    [[nodiscard]] bool equals(const std::shared_ptr<Object> &obj) const override;
    [[nodiscard]] float floatValue() const override;
    [[nodiscard]] int32_t hashCode() const override;
    static int32_t hashCode(int16_t value);
    [[nodiscard]] int32_t intValue() const override;
    [[nodiscard]] int64_t longValue() const override;
    static int16_t parseShort(const std::shared_ptr<String> &s);
    static int16_t parseShort(const std::shared_ptr<String> &s, int32_t radix);
    static int16_t reverseBytes(int16_t i);
    [[nodiscard]] int16_t shortValue() const override;
    [[nodiscard]] std::shared_ptr<String> toString() const override;
    static std::shared_ptr<String> toString(int16_t s);
    static int32_t toUnsignedInt(int16_t x);
    static int64_t toUnsignedLong(int16_t x);
    static std::shared_ptr<Short> valueOf(int16_t s);
    static std::shared_ptr<Short> valueOf(const std::shared_ptr<String> &s);
    static std::shared_ptr<Short> valueOf(const std::shared_ptr<String> &s, int32_t radix);
};


#endif //OPENCDK_SHORT_H
