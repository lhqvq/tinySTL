//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_OBJECT_H
#define TINYSTL_IS_OBJECT_H

#include "integral_constant.h"
#include "is_scalar.h"
#include "is_array.h"
#include "is_union.h"
#include "is_class.h"

namespace lhqvq {
    // object = scalar + array + union + class
    template <typename T>
    struct is_object : lhqvq::bool_constant< lhqvq::is_scalar_v<T>
                                        ||   lhqvq::is_array_v<T>
                                        ||   lhqvq::is_union_v<T>
                                        ||   lhqvq::is_class_v<T>
                                        > {};

    template <typename T>
    inline constexpr bool is_object_v = lhqvq::is_object<T>::value;
}

#endif //TINYSTL_IS_OBJECT_H
