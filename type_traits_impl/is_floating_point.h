//
// Created by LHQvQ on 2023/5/28.
//

#ifndef TINYSTL_IS_FLOATING_POINT_H
#define TINYSTL_IS_FLOATING_POINT_H

#include "integral_constant.h"
#include "is_same.h"

namespace lhqvq {
    template <typename T>
    using is_floating_point = lhqvq::bool_constant<   lhqvq::is_same_raw_v<float,        T>
                                                    || lhqvq::is_same_raw_v<double,       T>
                                                    || lhqvq::is_same_raw_v<long double,  T>
                                                    >;

    template <typename T>
    inline constexpr bool is_floating_point_v = lhqvq::is_floating_point<T>::value;

}

#endif //TINYSTL_IS_FLOATING_POINT_H
