//
// Created by LHQvQ on 2023/6/15.
//

#ifndef TINYSTL_IS_MOVE_CONSTRUCTIBLE_H
#define TINYSTL_IS_MOVE_CONSTRUCTIBLE_H

#include "integral_constant.h"
#include "is_constructible.h"
#include "add_rvalue_reference.h"
#include "add_const.h"

namespace lhqvq {
    // ---------------------------------------------------------------
    // -------------------- is_move_constructible --------------------
    template <typename T>
    struct is_move_constructible : lhqvq::is_constructible< T,
                                                            lhqvq::add_rvalue_reference_t<T>
                                                          > {};

    template <typename T>
    inline constexpr bool is_move_constructible_v = lhqvq::is_move_constructible<T>::value;
    // -------------------- is_move_constructible --------------------
    // ---------------------------------------------------------------




    // -------------------------------------------------------------------------
    // -------------------- is_trivially_move_constructible --------------------
    template <typename T>
    struct is_trivially_move_constructible : lhqvq::is_trivially_constructible< T,
                                                                                lhqvq::add_rvalue_reference_t<T>
                                                                              > {};

    template <typename T>
    inline constexpr bool is_trivially_move_constructible_v = lhqvq::is_trivially_move_constructible<T>::value;
    // -------------------- is_trivially_move_constructible --------------------
    // -------------------------------------------------------------------------




    // -----------------------------------------------------------------------
    // -------------------- is_nothrow_move_constructible --------------------
    template <typename T>
    struct is_nothrow_move_constructible : lhqvq::is_nothrow_constructible< T,
                                                                            lhqvq::add_rvalue_reference_t<T>
                                                                          > {};

    template <typename T>
    inline constexpr bool is_nothrow_move_constructible_v = lhqvq::is_nothrow_move_constructible<T>::value;
    // -------------------- is_nothrow_move_constructible --------------------
    // -----------------------------------------------------------------------
}

#endif //TINYSTL_IS_MOVE_CONSTRUCTIBLE_H
