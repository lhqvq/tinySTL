//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_COMPOUND_H
#define TINYSTL_IS_COMPOUND_H

#include "integral_constant.h"
#include "is_fundamental.h"

namespace lhqvq {
    // 复合类型 = 非基本类型
    template <typename T>
    struct is_compound : lhqvq::bool_constant<!lhqvq::is_fundamental_v<T>> {};

    template <typename T>
    inline constexpr bool is_compound_v = lhqvq::is_compound<T>::value;
}

#endif //TINYSTL_IS_COMPOUND_H
