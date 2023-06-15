//
// Created by LHQvQ on 2023/6/15.
//

#ifndef TINYSTL_IS_ASSIGNABLE_H
#define TINYSTL_IS_ASSIGNABLE_H

#include "integral_constant.h"

namespace lhqvq {
    // 需借助编译器

    // -------------------------------------------------------
    // -------------------- is_assignable --------------------
    template <typename T, typename U>
    struct is_assignable : lhqvq::bool_constant<__is_assignable(T, U)> {};

    template <typename T, typename U>
    inline constexpr bool is_assignable_v = lhqvq::is_assignable<T, U>::value;
    // -------------------- is_assignable --------------------
    // -------------------------------------------------------




    // -----------------------------------------------------------------
    // -------------------- is_trivially_assignable --------------------
    template <typename T, typename U>
    struct is_trivially_assignable : lhqvq::bool_constant<__is_trivially_assignable(T, U)> {};

    template <typename T, typename U>
    inline constexpr bool is_trivially_assignablev = lhqvq::is_trivially_assignable<T, U>::value;
    // -------------------- is_trivially_assignable --------------------
    // -----------------------------------------------------------------




    // ---------------------------------------------------------------
    // -------------------- is_nothrow_assignable --------------------
    template <typename T, typename U>
    struct is_nothrow_assignable : lhqvq::bool_constant<__is_nothrow_assignable(T, U)> {};

    template <typename T, typename U>
    inline constexpr bool is_nothrow_assignable_v = lhqvq::is_nothrow_assignable<T, U>::value;
    // -------------------- is_nothrow_assignable --------------------
    // ---------------------------------------------------------------
}

#endif //TINYSTL_IS_ASSIGNABLE_H
