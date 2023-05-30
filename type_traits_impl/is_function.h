//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_FUNCTION_H
#define TINYSTL_IS_FUNCTION_H

#include "integral_constant.h"
#include "is_const.h"
#include "is_reference.h"

namespace lhqvq {
    // 非成员函数无 cv 限定
    template <typename T>
    struct is_function : lhqvq::bool_constant< !lhqvq::is_const_v<T const>
                                            && !lhqvq::is_reference_v<T>
                                            > {};

    template <typename T>
    inline constexpr bool is_function_v = lhqvq::is_function<T>::value;
}

#endif //TINYSTL_IS_FUNCTION_H
