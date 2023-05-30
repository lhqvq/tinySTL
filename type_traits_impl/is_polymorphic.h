//
// Created by LHQvQ on 2023/5/30.
//

#ifndef TINYSTL_IS_POLYMORPHIC_H
#define TINYSTL_IS_POLYMORPHIC_H

#include "integral_constant.h"

namespace lhqvq {
    // 一个类是 polymorphic 类，需满足：声明了虚方法 或 其基类有虚方法
    namespace detail {
        // SFINAE
        template <typename T>
        lhqvq::true_type detect_is_polymorphic(
                // dynamic_cast 规则： 如果表达式是指向多态类型的指针，且新类型是到 void 的指针，那么结果是指向表达式所指向或引用的最终派生对象的指针
                decltype(dynamic_cast<const volatile void*>(static_cast<T*>(nullptr)))
        );

        template <typename T>
        lhqvq::false_type detect_is_polymorphic(...);
    }

    template <typename T>
    struct is_polymorphic : decltype(lhqvq::detail::detect_is_polymorphic<T>(nullptr)) {};

    template <typename T>
    inline constexpr bool is_polymorphic_v = lhqvq::is_polymorphic<T>::value;
}

#endif //TINYSTL_IS_POLYMORPHIC_H
