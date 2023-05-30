//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_ARRAY_H
#define TINYSTL_IS_ARRAY_H

#include <cstddef>

#include "integral_constant.h"

namespace lhqvq {
    template <typename T>
    struct is_array : lhqvq::false_type {};

    template <typename T, std::size_t N>
    struct is_array<T[N]> : lhqvq::true_type {};

    template <typename T>
    struct is_array<T[]> : lhqvq::true_type {};

    template <typename T>
    inline constexpr bool is_array_v = lhqvq::is_array<T>::value;
}

#endif //TINYSTL_IS_ARRAY_H
