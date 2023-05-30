//
// Created by LHQvQ on 2023/5/31.
//

#ifndef TINYSTL_IS_FINAL_H
#define TINYSTL_IS_FINAL_H

#include "integral_constant.h"

namespace lhqvq {
    // 依靠编译器
    template <typename T>
    struct is_final : lhqvq::bool_constant<__is_final(T)> {};

    template <typename T>
    inline constexpr bool is_final_v = lhqvq::is_final<T>::value;
}

#endif //TINYSTL_IS_FINAL_H
