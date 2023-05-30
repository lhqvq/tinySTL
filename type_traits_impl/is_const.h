//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_CONST_H
#define TINYSTL_IS_CONST_H

#include "integral_constant.h"

namespace lhqvq {
    template <typename T>
    struct is_const : lhqvq::false_type {};

    template <typename T>
    struct is_const<T const> : lhqvq::true_type {};

    template <typename T>
    inline constexpr bool is_const_v = lhqvq::is_const<T>::value;
}

#endif //TINYSTL_IS_CONST_H
