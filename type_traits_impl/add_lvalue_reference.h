//
// Created by LHQvQ on 2023/6/15.
//

#ifndef TINYSTL_ADD_LVALUE_REFERENCE_H
#define TINYSTL_ADD_LVALUE_REFERENCE_H

#include "type_identity.h"

namespace lhqvq {
    // SFINAE 方法
    namespace details {
        template <typename T>
        auto add_lvalue_reference_helper(int) -> lhqvq::type_identity<T&>;

        template <typename T>
        auto add_lvalue_reference_helper(...) -> lhqvq::type_identity<T>;
    }

    template <typename T>
    using add_lvalue_reference = decltype(lhqvq::details::add_lvalue_reference_helper<T>(0));

    template <typename T>
    using add_lvalue_reference_t = typename lhqvq::add_lvalue_reference<T>::type;

}

#endif //TINYSTL_ADD_LVALUE_REFERENCE_H
