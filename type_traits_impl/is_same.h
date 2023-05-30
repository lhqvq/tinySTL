//
// Created by LHQvQ on 2023/5/28.
//

#ifndef TINYSTL_IS_SAME_H
#define TINYSTL_IS_SAME_H

#include "integral_constant.h"
#include "remove_cv.h"

namespace lhqvq {
    // -------------------------------------------------
    // -------------------- is_same --------------------
    template <typename T1, typename T2>
    struct is_same : lhqvq::false_type {};

    template <typename T>
    struct is_same<T, T> : lhqvq::true_type {};

    template <typename T1, typename T2>
    inline constexpr bool is_same_v = lhqvq::is_same<T1, T2>::value;
    // -------------------- is_same --------------------
    // -------------------------------------------------




    // -----------------------------------------------------
    // -------------------- is_same_raw --------------------
    template <typename T1, typename T2>
    using is_same_raw = lhqvq::is_same<lhqvq::remove_cv_t<T1>, lhqvq::remove_cv_t<T2>>;

    template <typename T1, typename T2>
    inline constexpr bool is_same_raw_v = lhqvq::is_same_raw<T1, T2>::value;
    // -------------------- is_same_raw --------------------
    // -----------------------------------------------------
}

#endif //TINYSTL_IS_SAME_H
