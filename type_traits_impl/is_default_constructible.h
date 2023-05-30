//
// Created by LHQvQ on 2023/5/31.
//

#ifndef TINYSTL_IS_DEFAULT_CONSTRUCTIBLE_H
#define TINYSTL_IS_DEFAULT_CONSTRUCTIBLE_H

#include "integral_constant.h"
#include "is_constructible.h"

namespace lhqvq {
    // ------------------------------------------------------------------
    // -------------------- is_default_constructible --------------------
    template <typename T>
    struct is_default_constructible : lhqvq::is_constructible<T> {};

    template <typename T>
    inline constexpr bool is_default_constructible_v = lhqvq::is_default_constructible<T>::value;
    // -------------------- is_default_constructible --------------------
    // ------------------------------------------------------------------




    // ----------------------------------------------------------------------------
    // -------------------- is_trivially_default_constructible --------------------
    template <typename T>
    struct is_trivially_default_constructible : lhqvq::is_trivially_constructible<T> {};

    template <typename T>
    inline constexpr bool is_trivially_default_constructible_v = lhqvq::is_trivially_default_constructible<T>::value;
    // -------------------- is_trivially_default_constructible --------------------
    // ----------------------------------------------------------------------------




    // --------------------------------------------------------------------------
    // -------------------- is_nothrow_default_constructible --------------------
    template <typename T>
    struct is_nothrow_default_constructible : lhqvq::is_nothrow_constructible<T> {};

    template <typename T>
    inline constexpr bool is_nothrow_default_constructible_v = lhqvq::is_nothrow_default_constructible<T>::value;
    // -------------------- is_nothrow_default_constructible --------------------
    // --------------------------------------------------------------------------
}

#endif //TINYSTL_IS_DEFAULT_CONSTRUCTIBLE_H
