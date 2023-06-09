//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_ENUM_H
#define TINYSTL_IS_ENUM_H

#include "integral_constant.h"

namespace lhqvq {
    // 需依赖编译器实现
    template <typename T>
    struct is_enum : lhqvq::bool_constant<__is_enum(T)> {};

    template <typename T>
    inline constexpr bool is_enum_v = lhqvq::is_enum<T>::value;
}

#endif //TINYSTL_IS_ENUM_H
