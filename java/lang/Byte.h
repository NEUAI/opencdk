//
// Created by 艾峥鹏 on 2021/8/15.
//

#ifndef OPENCDK_BYTE_H
#define OPENCDK_BYTE_H

#include <java/lang/Number.h>
#include <java/lang/Comparable.h>


class Byte final : public Number, public Comparable<Byte> {
    const int8_t value;

public:
    static const int32_t BYTES;
    static const int8_t MAX_VALUE;
    static const int8_t MIN_VALUE;
    static const int32_t SIZE;
    static std::shared_ptr<Class<Byte>> TYPE;
    explicit Byte(int8_t value);
    explicit Byte(const std::shared_ptr<String> &s);
    [[nodiscard]] int8_t byteValue() const override;
    static int32_t compare(int8_t x, int8_t y);
    [[nodiscard]] int32_t compareTo(const std::shared_ptr<Byte> &anotherByte) const override;
    static std::shared_ptr<Byte> decode(const std::shared_ptr<String> &nm);
    [[nodiscard]] double doubleValue() const override;
    [[nodiscard]] bool equals(const std::shared_ptr<Object> &obj) const override;
    [[nodiscard]] float floatValue() const override;
    [[nodiscard]] int32_t hashCode() const override;
    static int32_t hashCode(int8_t value);
    [[nodiscard]] int32_t intValue() const override;
    [[nodiscard]] int64_t longValue() const override;
    static int8_t parseByte(const std::shared_ptr<String> &s);
    static int8_t parseByte(const std::shared_ptr<String> &s, int32_t radix);
    [[nodiscard]] int16_t shortValue() const override;
    [[nodiscard]] std::shared_ptr<String> toString() const override;
    static std::shared_ptr<String> toString(int8_t b);
    static int32_t toUnsignedInt(int8_t x);
    static int64_t toUnsignedLong(int8_t x);
    static std::shared_ptr<Byte> valueOf(int8_t b);
    static std::shared_ptr<Byte> valueOf(const std::shared_ptr<String> &s);
    static std::shared_ptr<Byte> valueOf(const std::shared_ptr<String> &s, int32_t radix);
};


#endif //OPENCDK_BYTE_H
