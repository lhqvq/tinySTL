//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_LVALUE_REFERENCE_H
#define TINYSTL_IS_LVALUE_REFERENCE_H

#include "integral_constant.h"

namespace lhqvq {
    template <typename T>
    struct is_lvalue_reference : false_type {};

    template <typename T>
    struct is_lvalue_reference<T&> : true_type {};

    template <typename T>
    inline constexpr bool is_lvalue_reference_v = is_lvalue_reference<T>::value;
}

#endif //TINYSTL_IS_LVALUE_REFERENCE_H
