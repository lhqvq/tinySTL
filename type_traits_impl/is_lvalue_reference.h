//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_LVALUE_REFERENCE_H
#define TINYSTL_IS_LVALUE_REFERENCE_H

#include "integral_constant.h"

namespace lhqvq {
    template <typename T>
    struct is_lvalue_reference : lhqvq::false_type {};

    template <typename T>
    struct is_lvalue_reference<T&> : lhqvq::true_type {};

    template <typename T>
    inline constexpr bool is_lvalue_reference_v = lhqvq::is_lvalue_reference<T>::value;
}

#endif //TINYSTL_IS_LVALUE_REFERENCE_H
