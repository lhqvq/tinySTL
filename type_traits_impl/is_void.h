//
// Created by LHQvQ on 2023/5/28.
//

#ifndef TINYSTL_IS_VOID_H
#define TINYSTL_IS_VOID_H

#include "is_same.h"

namespace lhqvq {
    template <typename T>
    struct is_void : is_same_raw<void, T> {};

    template <typename T>
    inline constexpr bool is_void_v = is_void<T>::value;
}

#endif //TINYSTL_IS_VOID_H
