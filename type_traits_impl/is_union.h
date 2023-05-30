//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_UNION_H
#define TINYSTL_IS_UNION_H

#include "integral_constant.h"

namespace lhqvq {
    // 次元函数无编译器的支持无法实现；
    // clang 和 gcc 都提供此种特殊的内建函数来判断该类型是否是 union
    template <typename T>
    struct is_union : lhqvq::bool_constant<__is_union(T)> {};

    template <typename T>
    inline constexpr bool is_union_v = lhqvq::is_union<T>::value;
}

#endif //TINYSTL_IS_UNION_H
