//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_CLASS_H
#define TINYSTL_IS_CLASS_H

#include "integral_constant.h"
#include "is_union.h"

namespace lhqvq {
    // SFINAE 方法
    namespace detail {
        template <typename T>
        lhqvq::bool_constant<not lhqvq::is_union_v<T>> is_class_helper(int T::*);

        template <typename T>
        lhqvq::false_type is_class_helper(...);
    }

    template <typename T>
    using is_class = decltype(lhqvq::detail::is_class_helper<T>(nullptr));

    template <typename T>
    inline constexpr bool is_class_v = lhqvq::is_class<T>::value;
}

#endif //TINYSTL_IS_CLASS_H
