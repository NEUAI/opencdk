//
// Created by 艾峥鹏 on 2021/8/15.
//

#ifndef OPENCDK_APPENDABLE_H
#define OPENCDK_APPENDABLE_H

#include <opencdk.h>


struct CharSequence;

struct Appendable {
    virtual std::shared_ptr<Appendable> append(char16_t c) = 0;
    virtual std::shared_ptr<Appendable> append(const std::shared_ptr<CharSequence> &csq) = 0;
    virtual std::shared_ptr<Appendable> append(const std::shared_ptr<CharSequence> &csq, int32_t start, int32_t end) = 0;
};


#endif //OPENCDK_APPENDABLE_H
