//
// Created by LHQvQ on 2023/5/30.
//

#ifndef TINYSTL_IS_STANDARD_LAYOUT_H
#define TINYSTL_IS_STANDARD_LAYOUT_H

#include "integral_constant.h"

namespace lhqvq {
    /*
     * 当类（class 或 struct ）同时满足以下几个条件时是标准布局（standard-layout）类型：
     * 1、没有虚函数或虚基类。
     * 2、所有非静态数据成员都具有相同的访问说明符（public / protected / private）。
     * 3、在继承体系中最多只有一个类中有非静态数据成员。
     * 4、子类中的第一个非静态成员的类型与其基类不同。
     */
    template <typename T>
    struct is_standard_layout : lhqvq::bool_constant<__is_standard_layout(T)> {};

    template <typename T>
    inline constexpr bool is_standard_layout_v = lhqvq::is_standard_layout<T>::value;
}

#endif //TINYSTL_IS_STANDARD_LAYOUT_H
