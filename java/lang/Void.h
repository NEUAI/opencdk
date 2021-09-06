//
// Created by 艾峥鹏 on 2021/8/15.
//

#ifndef OPENCDK_VOID_H
#define OPENCDK_VOID_H

#include <java/lang/Object.h>


class Void final : public Object {
public:
    Void() = delete;
    static std::shared_ptr<Class<Void>> TYPE;
};


#endif //OPENCDK_VOID_H
