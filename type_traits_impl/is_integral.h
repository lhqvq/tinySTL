//
// Created by LHQvQ on 2023/5/28.
//

#ifndef TINYSTL_IS_INTEGRAL_H
#define TINYSTL_IS_INTEGRAL_H

#include "integral_constant.h"
#include "is_same.h"

namespace lhqvq {
    template <typename T>
    using is_integral = bool_constant< is_same_raw_v<bool,                  T>
                                    || is_same_raw_v<char,                  T>
                                    || is_same_raw_v<char8_t,               T>
                                    || is_same_raw_v<char16_t,              T>
                                    || is_same_raw_v<char32_t,              T>
                                    || is_same_raw_v<wchar_t,               T>
                                    || is_same_raw_v<signed char,           T>
                                    || is_same_raw_v<unsigned char,         T>
                                    || is_same_raw_v<signed short,          T>
                                    || is_same_raw_v<unsigned short,        T>
                                    || is_same_raw_v<signed int,            T>
                                    || is_same_raw_v<unsigned int,          T>
                                    || is_same_raw_v<signed long,           T>
                                    || is_same_raw_v<unsigned long,         T>
                                    || is_same_raw_v<signed long long,      T>
                                    || is_same_raw_v<unsigned long long,    T>
                                    >;

    template <typename T>
    inline constexpr bool is_integral_v = is_integral<T>::value;
}

#endif //TINYSTL_IS_INTEGRAL_H
