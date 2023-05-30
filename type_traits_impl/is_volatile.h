//
// Created by LHQvQ on 2023/5/30.
//

#ifndef TINYSTL_IS_VOLATILE_H
#define TINYSTL_IS_VOLATILE_H

#include "integral_constant.h"

namespace lhqvq {
    template <typename T>
    struct is_volatile : false_type {};

    template <typename T>
    struct is_volatile<T volatile> : true_type {};

    template <typename T>
    inline constexpr bool is_volatile_v = is_volatile<T>::value;
}

#endif //TINYSTL_IS_VOLATILE_H
