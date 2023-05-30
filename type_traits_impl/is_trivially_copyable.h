//
// Created by LHQvQ on 2023/5/30.
//

#ifndef TINYSTL_IS_TRIVIALLY_COPYABLE_H
#define TINYSTL_IS_TRIVIALLY_COPYABLE_H

#include "integral_constant.h"

namespace lhqvq {
    /*
     * 一个 class/struct/union 是 trivially_copyable 的，需满足：
     * 1、必须使用默认的 拷贝构造、移动构造、拷贝赋值、移动赋值、析构函数
     * 2、没有虚成员
     * 3、它的 基类、非静态数据成员 也必须是 trivially_copyable 的
     */
    // 需依赖编译器实现
    template <typename T>
    struct is_trivially_copyable : lhqvq::bool_constant<__is_trivially_copyable(T)> {};

    template <typename T>
    inline constexpr bool is_trivially_copyable_v = lhqvq::is_trivially_copyable<T>::value;
}

#endif //TINYSTL_IS_TRIVIALLY_COPYABLE_H
