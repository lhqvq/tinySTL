//
// Created by LHQvQ on 2023/5/28.
//

#ifndef TINYSTL_INTEGRAL_CONSTANT_H
#define TINYSTL_INTEGRAL_CONSTANT_H

namespace lhqvq {
    template <class T, T v>
    struct integral_constant {
        static constexpr T value = v;

        using value_type = T;
        using type       = integral_constant<T, v>;

        // 隐式类型转换
        constexpr operator value_type() const noexcept {
            return value;
        }

        // functor
        constexpr value_type operator()() const noexcept {
            return value;
        }
    };

    template <bool B>
    using bool_constant = integral_constant<bool, B>;

    using true_type = bool_constant<true>;
    using false_type = bool_constant<false>;
}

#endif //TINYSTL_INTEGRAL_CONSTANT_H
