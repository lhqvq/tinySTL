//
// Created by LHQvQ on 2023/5/30.
//

#ifndef TINYSTL_IS_EMPTY_H
#define TINYSTL_IS_EMPTY_H

#include "integral_constant.h"

namespace lhqvq {
    template <typename T>
    struct is_empty : lhqvq::bool_constant<__is_empty(T)> {};

    template <typename T>
    inline constexpr bool is_empty_v = lhqvq::is_empty<T>::value;
}

#endif //TINYSTL_IS_EMPTY_H
