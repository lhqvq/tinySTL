//
// Created by LHQvQ on 2023/10/25.
//

#ifndef TINYSTL_IS_MOVE_ASSIGNABLE_H
#define TINYSTL_IS_MOVE_ASSIGNABLE_H

#include "is_assignable.h"
#include "add_lvalue_reference.h"
#include "add_rvalue_reference.h"

namespace lhqvq {
    // ---------------------------------------------------------------
    // -------------------- is_move_assignable -----------------------
    template <typename T>
    struct is_move_assignable : lhqvq::is_assignable<lhqvq::add_lvalue_reference_t<T>, lhqvq::add_rvalue_reference_t<T>> {};

    template <typename T>
    inline constexpr bool is_move_assignable_v = lhqvq::is_move_assignable<T>::value;
    // -------------------- is_move_assignable -----------------------
    // ---------------------------------------------------------------




    // ---------------------------------------------------------------
    // -------------------- is_trivially_move_assignable -------------
    template <typename T>
    struct is_trivially_move_assignable : lhqvq::is_trivially_assignable<lhqvq::add_lvalue_reference_t<T>, lhqvq::add_rvalue_reference_t<T>> {};

    template <typename T>
    inline constexpr bool is_trivially_move_assignable_v = lhqvq::is_trivially_move_assignable<T>::value;
    // -------------------- is_trivially_move_assignable -------------
    // ---------------------------------------------------------------




    // ---------------------------------------------------------------
    // -------------------- is_nothrow_move_assignable ---------------
    template <typename T>
    struct is_nothrow_move_assignable : lhqvq::is_nothrow_assignable<lhqvq::add_lvalue_reference_t<T>, lhqvq::add_rvalue_reference_t<T>> {};

    template <typename T>
    inline constexpr bool is_nothrow_move_assignable_v = lhqvq::is_nothrow_move_assignable<T>::value;
    // -------------------- is_nothrow_move_assignable ---------------
    // ---------------------------------------------------------------
}

#endif //TINYSTL_IS_MOVE_ASSIGNABLE_H
