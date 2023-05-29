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
        bool_constant<not is_union_v<T>> is_class_or_union(int T::*);

        template <typename T>
        false_type is_class_or_union();
    }

    template <typename T>
    using is_class = decltype(detail::is_class_or_union<T>(nullptr));

    template <typename T>
    inline constexpr bool is_class_v = is_class<T>::value;
}

#endif //TINYSTL_IS_CLASS_H
