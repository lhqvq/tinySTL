//
// Created by LHQvQ on 2023/5/31.
//

#ifndef TINYSTL_IS_ABSTRACT_H
#define TINYSTL_IS_ABSTRACT_H

#include "integral_constant.h"

namespace lhqvq {
    // 依靠编译器
    template <typename T>
    struct is_abstract : lhqvq::bool_constant<__is_abstract(T)> {};

    template <typename T>
    inline constexpr bool is_abstract_v = lhqvq::is_abstract<T>::value;
}

#endif //TINYSTL_IS_ABSTRACT_H
