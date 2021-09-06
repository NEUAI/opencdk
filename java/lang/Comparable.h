//
// Created by 艾峥鹏 on 2021/8/15.
//

#ifndef OPENCDK_COMPARABLE_H
#define OPENCDK_COMPARABLE_H

#include <opencdk.h>


template<class T> struct Comparable {
    virtual int32_t compareTo(const std::shared_ptr<T> &o) const = 0;
};


#endif //OPENCDK_COMPARABLE_H
