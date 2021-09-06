//
// Created by 艾峥鹏 on 2021/8/15.
//

#ifndef OPENCDK_CHARSEQUENCE_H
#define OPENCDK_CHARSEQUENCE_H

#include <opencdk.h>

class IntStream;
class String;


struct CharSequence {
    [[nodiscard]] virtual char16_t charAt(int32_t index) const = 0;
    [[nodiscard]] virtual std::shared_ptr<IntStream> chars() const;
    [[nodiscard]] virtual std::shared_ptr<IntStream> codePoints() const;
    [[nodiscard]] virtual int32_t length() const = 0;
    [[nodiscard]] virtual std::shared_ptr<CharSequence> subSequence(int32_t start, int32_t end) const = 0;
    [[nodiscard]] virtual std::shared_ptr<String> toString() const = 0;
};


#endif //OPENCDK_CHARSEQUENCE_H
