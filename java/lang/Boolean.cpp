//
// Created by 艾峥鹏 on 2021/8/15.
//

#include "Boolean.h"

std::shared_ptr<Boolean> Boolean::TRUE(new Boolean(true)); /* NOLINT */

std::shared_ptr<Boolean> Boolean::FALSE(new Boolean(false)); /* NOLINT */

std::shared_ptr<Class<Boolean>> Boolean::TYPE = nullptr; // todo

Boolean::Boolean(bool value) : value(value) {}

Boolean::Boolean(const std::shared_ptr<String> &s) : value(parseBoolean(s)) {}

bool Boolean::booleanValue() const {
    return value;
}

int32_t Boolean::compare(bool x, bool y) {
    return (x == y) ? 0 : (x ? 1 : -1);
}

int32_t Boolean::compareTo(const std::shared_ptr<Boolean> &b) const {
    return compare(this->value, b->value);
}

bool Boolean::equals(const std::shared_ptr<Object> &obj) const {
    if (std::dynamic_pointer_cast<Boolean>(obj))
        return value == std::dynamic_pointer_cast<Boolean>(obj)->booleanValue();
    return false;
}

bool Boolean::getBoolean(const std::shared_ptr<String> &name) { // todo
    return false;
}

int32_t Boolean::hashCode() const {
    return Boolean::hashCode(value);
}

int32_t Boolean::hashCode(bool value) {
    return value ? 1231 : 1237;
}

bool Boolean::logicalAnd(bool a, bool b) {
    return a && b;
}

bool Boolean::logicalOr(bool a, bool b) {
    return a || b;
}

bool Boolean::logicalXor(bool a, bool b) {
    return a ^ b;
}

bool Boolean::parseBoolean(const std::shared_ptr<String> &s) { // todo
    return false;
}

std::shared_ptr<String> Boolean::toString() const { // todo
    return Object::toString();
}

std::shared_ptr<String> Boolean::toString(bool b) { // todo
    return nullptr;
}

std::shared_ptr<Boolean> Boolean::valueOf(bool b) {
    return (b ? TRUE : FALSE);
}

std::shared_ptr<Boolean> Boolean::valueOf(const std::shared_ptr<String> &s) {
    return parseBoolean(s) ? TRUE : FALSE;
}
