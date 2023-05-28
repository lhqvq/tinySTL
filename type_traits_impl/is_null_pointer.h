//
// Created by LHQvQ on 2023/5/28.
//

#ifndef TINYSTL_IS_NULL_POINTER_H
#define TINYSTL_IS_NULL_POINTER_H

#include <cstddef>

#include "is_same.h"

namespace lhqvq {
    template <typename T>
    struct is_null_pointer : is_same_raw<std::nullptr_t, T> {};

    template <typename T>
    inline constexpr bool is_null_pointer_v = is_null_pointer<T>::value;
}

#endif //TINYSTL_IS_NULL_POINTER_H
