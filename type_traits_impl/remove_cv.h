//
// Created by LHQvQ on 2023/5/28.
//

#ifndef TINYSTL_REMOVE_CV_H
#define TINYSTL_REMOVE_CV_H

#include "type_identity.h"

namespace lhqvq {
    // ------------------------------------------------------
    // -------------------- remove_const --------------------
    template <typename T>
    struct remove_const : type_identity<T> {};

    template <typename T>
    struct remove_const<T const> : type_identity<T> {};

    template <typename T>
    using remove_const_t = typename remove_const<T>::type;
    // -------------------- remove_const --------------------
    // ------------------------------------------------------




    // ---------------------------------------------------------
    // -------------------- remove_volatile --------------------
    template <typename T>
    struct remove_volatile : type_identity<T> {};

    template <typename T>
    struct remove_volatile<T volatile> : type_identity<T> {};

    template <typename T>
    using remove_volatile_t = typename remove_volatile<T>::type;
    // -------------------- remove_volatile --------------------
    // ---------------------------------------------------------




    // ---------------------------------------------------
    // -------------------- remove_cv --------------------
    template <typename T>
    using remove_cv = remove_const<remove_volatile_t<T>>;

    template <typename T>
    using remove_cv_t = typename remove_cv<T>::type;
    // -------------------- remove_cv --------------------
    // ---------------------------------------------------
}

#endif //TINYSTL_REMOVE_CV_H
