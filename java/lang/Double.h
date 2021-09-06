//
// Created by 艾峥鹏 on 2021/8/16.
//

#ifndef OPENCDK_DOUBLE_H
#define OPENCDK_DOUBLE_H

#include <java/lang/Number.h>
#include <java/lang/Comparable.h>


class Double final : public Number, public Comparable<Double> {
    const double value;

public:
    static const int32_t BYTES;
    static const int32_t MAX_EXPONENT;
    static const double MAX_VALUE;
    static const int32_t MIN_EXPONENT;
    static const double MIN_NORMAL;
    static const double MIN_VALUE;
    static const double NaN;
    static const double NEGATIVE_INFINITY;
    static const double POSITIVE_INFINITY;
    static const int32_t SIZE;
    static std::shared_ptr<Class<Double>> TYPE;
    explicit Double(double value);
    explicit Double(const std::shared_ptr<String> &s);
    [[nodiscard]] int8_t byteValue() const override;
    static int32_t compare(double d1, double d2);
    [[nodiscard]] int32_t compareTo(const std::shared_ptr<Double> &anotherDouble) const override;
    static int64_t doubleToLongBits(double value);
    static int64_t doubleToRawLongBits(double value);
    [[nodiscard]] double doubleValue() const override;
    [[nodiscard]] bool equals(const std::shared_ptr<Object> &obj) const override;
    [[nodiscard]] float floatValue() const override;
    [[nodiscard]] int32_t hashCode() const override;
    static int32_t hashCode(double value);
    [[nodiscard]] int32_t intValue() const override;
    static bool isFinite(double d);
    [[nodiscard]] virtual bool isInfinite() const;
    static bool isInfinite(double v);
    [[nodiscard]] virtual bool isNaN() const;
    static bool isNaN(double v);
    static double longBitsToDouble(int64_t bits);
    [[nodiscard]] int64_t longValue() const override;
    static double max(double a, double b);
    static double min(double a, double b);
    static double parseDouble(const std::shared_ptr<String> &s);
    [[nodiscard]] int16_t shortValue() const override;
    static double sum(double a, double b);
    static std::shared_ptr<String> toHexString(double d);
    [[nodiscard]] std::shared_ptr<String> toString() const override;
    static std::shared_ptr<String> toString(double d);
    static std::shared_ptr<Double> valueOf(double d);
    static std::shared_ptr<Double> valueOf(const std::shared_ptr<String> &s);
};


#endif //OPENCDK_DOUBLE_H
