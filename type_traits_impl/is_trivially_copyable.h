//
// Created by LHQvQ on 2023/5/30.
//

#ifndef TINYSTL_IS_TRIVIALLY_COPYABLE_H
#define TINYSTL_IS_TRIVIALLY_COPYABLE_H

#include "integral_constant.h"

namespace lhqvq {
    // 需依赖编译器实现
    template <typename T>
    struct is_trivially_copyable : bool_constant<__is_trivially_copyable(T)> {};

    template <typename T>
    inline constexpr bool is_trivially_copyable_v = is_trivially_copyable<T>::value;
}

#endif //TINYSTL_IS_TRIVIALLY_COPYABLE_H
