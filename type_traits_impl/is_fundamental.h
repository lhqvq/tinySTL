//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_FUNDAMENTAL_H
#define TINYSTL_IS_FUNDAMENTAL_H

#include <cstddef>

#include "integral_constant.h"
#include "is_arithmetic.h"
#include "is_void.h"
#include "is_same.h"
#include "remove_cv.h"

namespace lhqvq {
    // fundamental = arithmetic + void + nullptr_t = integral + floating_point + void + nullptr_t
    template <typename T>
    struct is_fundamental : bool_constant<is_arithmetic_v<T>
                                    ||    is_void_v<T>
                                    ||    is_same_raw_v<std::nullptr_t, T>
                                    > {};

    template <typename T>
    inline constexpr bool is_fundamental_v = is_fundamental<T>::value;
}

#endif //TINYSTL_IS_FUNDAMENTAL_H
