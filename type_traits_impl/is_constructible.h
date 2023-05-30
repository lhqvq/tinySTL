//
// Created by LHQvQ on 2023/5/31.
//

#ifndef TINYSTL_IS_CONSTRUCTIBLE_H
#define TINYSTL_IS_CONSTRUCTIBLE_H

#include "integral_constant.h"

namespace lhqvq {
    // 需借助编译器

    // ----------------------------------------------------------
    // -------------------- is_constructible --------------------
    template <typename T, typename... Args>
    struct is_constructible : lhqvq::bool_constant<__is_constructible(T, Args...)> {};

    template <typename T, typename... Args>
    inline constexpr bool is_constructible_v = lhqvq::is_constructible<T, Args...>::value;
    // -------------------- is_constructible --------------------
    // ----------------------------------------------------------




    // --------------------------------------------------------------------
    // -------------------- is_trivially_constructible --------------------
    template <typename T, typename... Args>
    struct is_trivially_constructible : lhqvq::bool_constant<__is_trivially_constructible(T, Args...)> {};

    template <typename T, typename... Args>
    inline constexpr bool is_trivially_constructible_v = lhqvq::is_trivially_constructible<T, Args...>::value;
    // -------------------- is_trivially_constructible --------------------
    // --------------------------------------------------------------------




    // ------------------------------------------------------------------
    // -------------------- is_nothrow_constructible --------------------
    template <typename T, typename... Args>
    struct is_nothrow_constructible : lhqvq::bool_constant<__is_nothrow_constructible(T, Args...)> {};

    template <typename T, typename... Args>
    inline constexpr bool is_nothrow_constructible_v = lhqvq::is_nothrow_constructible<T, Args...>::value;
    // -------------------- is_nothrow_constructible --------------------
    // ------------------------------------------------------------------
}

#endif //TINYSTL_IS_CONSTRUCTIBLE_H
