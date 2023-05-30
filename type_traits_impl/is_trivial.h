//
// Created by LHQvQ on 2023/5/31.
//

#ifndef TINYSTL_IS_TRIVIAL_H
#define TINYSTL_IS_TRIVIAL_H

#include "integral_constant.h"
#include "is_trivially_copyable.h"
#include "is_default_constructible.h"

namespace lhqvq {
    template <typename T>
    struct is_trivial : lhqvq::bool_constant<lhqvq::is_trivially_copyable_v<T>
                                        &&   lhqvq::is_trivially_default_constructible_v<T>
                                        > {};

    template <typename T>
    inline constexpr bool is_trivial_v = lhqvq::is_trivial<T>::value;
}

#endif //TINYSTL_IS_TRIVIAL_H
