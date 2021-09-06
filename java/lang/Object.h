//
// Created by 艾峥鹏 on 2021/8/14.
//

#ifndef OPENCDK_OBJECT_H
#define OPENCDK_OBJECT_H

#include <opencdk.h>

template<class T> class Class;
class String;


class Object {
protected:
    [[nodiscard]] virtual std::shared_ptr<Object> clone() const;
    virtual void finalize();

public:
    Object();
    virtual ~Object();
    [[nodiscard]] virtual bool equals(const std::shared_ptr<Object> &obj) const;
    [[nodiscard]] virtual std::shared_ptr<Class<Object>> getClass() const final; // todo
    [[nodiscard]] virtual int32_t hashCode() const;
    virtual void notify() final;
    virtual void notifyAll() final;
    [[nodiscard]] virtual std::shared_ptr<String> toString() const;
    virtual void wait() final;
    virtual void wait(int64_t timeout) final;
    virtual void wait(int64_t timeout, int32_t nanos) final;
};


#endif //OPENCDK_OBJECT_H
