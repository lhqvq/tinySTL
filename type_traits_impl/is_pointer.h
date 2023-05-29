//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_POINTER_H
#define TINYSTL_IS_POINTER_H

#include "integral_constant.h"
#include "remove_cv.h"

namespace lhqvq {
    namespace detail {
        template <typename T>
        struct is_pointer_helper : false_type {};

        template <typename T>
        struct is_pointer_helper<T *> : true_type {};
    }

    template <typename T>
    using is_pointer = detail::is_pointer_helper<remove_cv_t<T>>;

    template <typename T>
    inline constexpr bool is_pointer_v = is_pointer<T>::value;
}

#endif //TINYSTL_IS_POINTER_H
