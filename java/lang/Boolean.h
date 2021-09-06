//
// Created by 艾峥鹏 on 2021/8/15.
//

#ifndef OPENCDK_BOOLEAN_H
#define OPENCDK_BOOLEAN_H

#include <java/lang/Object.h>
#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>


class Boolean final : public Object, public Serializable, public Comparable<Boolean> {
    const bool value;

public:
    static std::shared_ptr<Boolean> FALSE;
    static std::shared_ptr<Boolean> TRUE;
    static std::shared_ptr<Class<Boolean>> TYPE;
    explicit Boolean(bool value);
    explicit Boolean(const std::shared_ptr<String> &s);
    [[nodiscard]] virtual bool booleanValue() const;
    static int32_t compare(bool x, bool y);
    [[nodiscard]] int32_t compareTo(const std::shared_ptr<Boolean> &b) const override;
    [[nodiscard]] bool equals(const std::shared_ptr<Object> &obj) const override;
    static bool getBoolean(const std::shared_ptr<String> &name);
    [[nodiscard]] int32_t hashCode() const override;
    static int32_t hashCode(bool value);
    static bool logicalAnd(bool a, bool b);
    static bool logicalOr(bool a, bool b);
    static bool logicalXor(bool a, bool b);
    static bool parseBoolean(const std::shared_ptr<String> &s);
    [[nodiscard]] std::shared_ptr<String> toString() const override;
    static std::shared_ptr<String> toString(bool b);
    static std::shared_ptr<Boolean> valueOf(bool b);
    static std::shared_ptr<Boolean> valueOf(const std::shared_ptr<String> &s);
};


#endif //OPENCDK_BOOLEAN_H
