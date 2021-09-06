//
// Created by 艾峥鹏 on 2021/8/16.
//

#ifndef OPENCDK_FLOAT_H
#define OPENCDK_FLOAT_H

#include <java/lang/Number.h>
#include <java/lang/Comparable.h>


class Float final : public Number, public Comparable<Float> {
    const float value;

public:
    static const int32_t BYTES;
    static const int32_t MAX_EXPONENT;
    static const float MAX_VALUE;
    static const int32_t MIN_EXPONENT;
    static const float MIN_NORMAL;
    static const float MIN_VALUE;
    static const float NaN;
    static const float NEGATIVE_INFINITY;
    static const float POSITIVE_INFINITY;
    static const int32_t SIZE;
    static std::shared_ptr<Class<Float>> TYPE;
    explicit Float(double value);
    explicit Float(float value);
    explicit Float(const std::shared_ptr<String> &s);
    [[nodiscard]] int8_t byteValue() const override;
    static int32_t compare(float f1, float f2);
    [[nodiscard]] int32_t compareTo(const std::shared_ptr<Float> &anotherFloat) const override;
    [[nodiscard]] double doubleValue() const override;
    [[nodiscard]] bool equals(const std::shared_ptr<Object> &obj) const override;
    static int32_t floatToIntBits(float value);
    static int32_t floatToRawIntBits(float value);
    [[nodiscard]] float floatValue() const override;
    [[nodiscard]] int32_t hashCode() const override;
    static int32_t hashCode(float value);
    static float intBitsToFloat(int32_t bits);
    [[nodiscard]] int32_t intValue() const override;
    static bool isFinite(float f);
    [[nodiscard]] virtual bool isInfinite() const;
    static bool isInfinite(float v);
    [[nodiscard]] virtual bool isNaN() const;
    static bool isNaN(float v);
    [[nodiscard]] int64_t longValue() const override;
    static float max(float a, float b);
    static float min(float a, float b);
    static float parseFloat(const std::shared_ptr<String> &s);
    [[nodiscard]] int16_t shortValue() const override;
    static float sum(float a, float b);
    static std::shared_ptr<String> toHexString(float f);
    [[nodiscard]] std::shared_ptr<String> toString() const override;
    static std::shared_ptr<String> toString(float f);
    static std::shared_ptr<Float> valueOf(float f);
    static std::shared_ptr<Float> valueOf(const std::shared_ptr<String> &s);
};


#endif //OPENCDK_FLOAT_H
