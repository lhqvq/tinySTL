//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_REFERENCE_H
#define TINYSTL_IS_REFERENCE_H

#include "integral_constant.h"
#include "is_lvalue_reference.h"
#include "is_rvalue_reference.h"

namespace lhqvq {
    template <typename T>
    struct is_reference : lhqvq::bool_constant< lhqvq::is_lvalue_reference_v<T>
                                            ||  lhqvq::is_rvalue_reference_v<T>
                                            > {};

    template <typename T>
    inline constexpr bool is_reference_v = lhqvq::is_reference<T>::value;
}

#endif //TINYSTL_IS_REFERENCE_H
