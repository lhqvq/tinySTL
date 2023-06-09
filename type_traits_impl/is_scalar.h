//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_SCALAR_H
#define TINYSTL_IS_SCALAR_H

#include "integral_constant.h"
#include "is_arithmetic.h"
#include "is_enum.h"
#include "is_pointer.h"
#include "is_member_pointer.h"
#include "is_null_pointer.h"

namespace lhqvq {
    // scalar = arithmetic + enum + pointer + member_pointer + null_pointer
    template <typename T>
    struct is_scalar : lhqvq::bool_constant< lhqvq::is_arithmetic_v<T>
                                        ||   lhqvq::is_enum_v<T>
                                        ||   lhqvq::is_pointer_v<T>
                                        ||   lhqvq::is_member_pointer_v<T>
                                        ||   lhqvq::is_null_pointer_v<T>
                                        > {};

    template <typename T>
    inline constexpr bool is_scalar_v = lhqvq::is_scalar<T>::value;
}

#endif //TINYSTL_IS_SCALAR_H
