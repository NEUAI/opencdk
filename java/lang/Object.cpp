//
// Created by 艾峥鹏 on 2021/8/14.
//

#include "Object.h"

std::shared_ptr<Object> Object::clone() const { // todo
    return nullptr;
}

void Object::finalize() {
    delete this;
}

Object::Object() = default;

Object::~Object() = default;

bool Object::equals(const std::shared_ptr<Object> &obj) const {
    return (this == obj.get());
}

std::shared_ptr<Class<Object>> Object::getClass() const { // todo
    return nullptr;
}

int32_t Object::hashCode() const {
    return (int32_t)(uint64_t)this;
}

void Object::notify() { // todo

}

void Object::notifyAll() { // todo

}

std::shared_ptr<String> Object::toString() const { // todo
    return nullptr;
}

void Object::wait() {
    wait(0);
}

void Object::wait(int64_t timeout) { // todo

}

void Object::wait(int64_t timeout, int32_t nanos) { // todo
    // if (timeout < 0)
    //     throw new IllegalArgumentException("timeout value is negative");
    // if (nanos < 0 || nanos > 999999)
    //     throw new IllegalArgumentException("nanosecond timeout value out of range");
    if (nanos > 0)
        timeout++;
    wait(timeout);
}
