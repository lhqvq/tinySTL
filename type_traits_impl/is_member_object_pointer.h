//
// Created by LHQvQ on 2023/5/29.
//

#ifndef TINYSTL_IS_MEMBER_OBJECT_POINTER_H
#define TINYSTL_IS_MEMBER_OBJECT_POINTER_H

#include "integral_constant.h"
#include "is_member_pointer.h"
#include "is_member_function_pointer.h"

namespace lhqvq {
    // 指向成员对象的指针：是成员指针但不是成员函数指针
    template <typename T>
    struct is_member_object_pointer : bool_constant<is_member_pointer_v<T>
                                                &&  !is_member_function_pointer_v<T>
                                                > {};

    template <typename T>
    inline constexpr bool is_member_object_pointer_v = is_member_object_pointer<T>::value;;
}

#endif //TINYSTL_IS_MEMBER_OBJECT_POINTER_H
