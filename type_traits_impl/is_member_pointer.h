//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_MEMBER_POINTER_H
#define TINYSTL_IS_MEMBER_POINTER_H

#include "integral_constant.h"
#include "remove_cv.h"

namespace lhqvq {
    namespace detail {
        template <typename T>
        struct is_member_pointer_helper : lhqvq::false_type {};

        template <typename T, typename U>
        struct is_member_pointer_helper<T U::*> : lhqvq::true_type {};
    }

    template <typename T>
    struct is_member_pointer : lhqvq::detail::is_member_pointer_helper<lhqvq::remove_cv_t<T>> {};

    template <typename T>
    inline constexpr bool is_member_pointer_v = lhqvq::is_member_pointer<T>::value;
}

#endif //TINYSTL_IS_MEMBER_POINTER_H
