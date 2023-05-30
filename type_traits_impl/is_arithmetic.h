//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_ARITHMETIC_H
#define TINYSTL_IS_ARITHMETIC_H

#include "integral_constant.h"
#include "is_integral.h"
#include "is_floating_point.h"

namespace lhqvq {
    // arithmetic = integral + floating_point
    template <typename T>
    struct is_arithmetic : lhqvq::bool_constant<lhqvq::is_integral_v<T>
                                            ||  lhqvq::is_floating_point_v<T>
                                            > {};

    template <typename T>
    inline constexpr bool is_arithmetic_v = lhqvq::is_arithmetic<T>::value;
}

#endif //TINYSTL_IS_ARITHMETIC_H
