//
// Created by LHQvQ on 2023/6/15.
//

#ifndef TINYSTL_IS_COPY_CONSTRUCTIBLE_H
#define TINYSTL_IS_COPY_CONSTRUCTIBLE_H

#include "integral_constant.h"
#include "is_constructible.h"
#include "add_lvalue_reference.h"
#include "add_const.h"

namespace lhqvq {
    // ---------------------------------------------------------------
    // -------------------- is_copy_constructible --------------------
    template <typename T>
    struct is_copy_constructible : lhqvq::is_constructible< T,
                                                            lhqvq::add_lvalue_reference_t<lhqvq::add_const_t<T>>
                                                          > {};

    template <typename T>
    inline constexpr bool is_copy_constructible_v = lhqvq::is_copy_constructible<T>::value;
    // -------------------- is_copy_constructible --------------------
    // ---------------------------------------------------------------




    // -------------------------------------------------------------------------
    // -------------------- is_trivially_copy_constructible --------------------
    template <typename T>
    struct is_trivially_copy_constructible : lhqvq::is_trivially_constructible< T,
                                                                                lhqvq::add_lvalue_reference_t<lhqvq::add_const_t<T>>
                                                                              > {};

    template <typename T>
    inline constexpr bool is_trivially_copy_constructible_v = lhqvq::is_trivially_copy_constructible<T>::value;
    // -------------------- is_trivially_copy_constructible --------------------
    // -------------------------------------------------------------------------




    // -----------------------------------------------------------------------
    // -------------------- is_nothrow_copy_constructible --------------------
    template <typename T>
    struct is_nothrow_copy_constructible : lhqvq::is_nothrow_constructible< T,
                                                                            lhqvq::add_lvalue_reference_t<lhqvq::add_const_t<T>>
                                                                          > {};

    template <typename T>
    inline constexpr bool is_nothrow_copy_constructible_v = lhqvq::is_nothrow_copy_constructible<T>::value;
    // -------------------- is_nothrow_copy_constructible --------------------
    // -----------------------------------------------------------------------
}

#endif //TINYSTL_IS_COPY_CONSTRUCTIBLE_H
