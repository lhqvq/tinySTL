//
// Created by LHQvQ on 2023/5/28.
//

#ifndef TINYSTL_TEST_TYPE_TRAITS_H
#define TINYSTL_TEST_TYPE_TRAITS_H

#include <cstddef>

#include "../type_traits.h"

namespace lhqvq_test {
    void test_type_traits() {
        // value_identity test
        static_assert(42 == lhqvq::value_identity_v<42>);
        static_assert(true == lhqvq::value_identity_v<true>);
        static_assert('a' == lhqvq::value_identity_v<'a'>);


        // type_identity test
        static_assert(lhqvq::is_same_v<int, lhqvq::type_identity_t<int>>);
        static_assert(not lhqvq::is_same_v<int, lhqvq::type_identity_t<unsigned>>);

        // remove_cv test
        static_assert(lhqvq::is_same_v<int, lhqvq::remove_const_t<int>>);
        static_assert(not lhqvq::is_same_v<int, lhqvq::remove_const_t<unsigned>>);
        static_assert(lhqvq::is_same_v<const int *, lhqvq::remove_const_t<const int *>>);
        static_assert(lhqvq::is_same_v<int *, lhqvq::remove_const_t<int * const>>);


        // is_void test
        static_assert(not lhqvq::is_void_v<int>);
        static_assert(lhqvq::is_void_v<void>);
        static_assert(lhqvq::is_void_v<void const>);
        static_assert(lhqvq::is_void_v<void volatile>);


        // is_null_pointer test
        static_assert(not lhqvq::is_null_pointer_v<int>);
        static_assert(lhqvq::is_null_pointer_v<std::nullptr_t>);
        static_assert(lhqvq::is_null_pointer_v<std::nullptr_t const>);
        static_assert(lhqvq::is_null_pointer_v<std::nullptr_t volatile>);
    }
}

#endif //TINYSTL_TEST_TYPE_TRAITS_H
