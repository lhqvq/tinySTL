//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_MEMBER_FUNCTION_POINTER_H
#define TINYSTL_IS_MEMBER_FUNCTION_POINTER_H

#include "integral_constant.h"
#include "remove_cv.h"
#include "is_function.h"

namespace lhqvq {
    namespace detail {
        template <typename T>
        struct is_member_function_pointer_helper : lhqvq::false_type {};

        // 成员函数继承自 is_function
        template <typename T, typename U>
        struct is_member_function_pointer_helper<T U::*> : lhqvq::is_function<T> {};
    }

    template <typename T>
    struct is_member_function_pointer : lhqvq::detail::is_member_function_pointer_helper<lhqvq::remove_cv_t<T>> {};

    template <typename T>
    inline constexpr bool is_member_function_pointer_v = lhqvq::is_member_function_pointer<T>::value;
}

#endif //TINYSTL_IS_MEMBER_FUNCTION_POINTER_H
