//
// Created by LHQvQ on 2023/5/30.
//

#ifndef TINYSTL_IS_POD_H
#define TINYSTL_IS_POD_H

#include "integral_constant.h"
#include "is_trivial.h"
#include "is_standard_layout.h"

namespace lhqvq {
    /*
     * POD类是一个既是 trivial（只能静态初始化）又是 standard_layout（具有简单的数据结构）的类，
     * 因此主要局限于与该语言中用结构或并集声明的C数据结构兼容的类的特征，即使
     * 扩展的 C++ 语法可以在其声明中使用，并且可以具有成员函数。
     */
    template <typename T>
    struct is_pod : lhqvq::bool_constant<lhqvq::is_trivial_v<T>
                                    &&   lhqvq::is_standard_layout_v<T>
                                    > {};

    template <typename T>
    inline constexpr bool is_pod_v = lhqvq::is_pod<T>::value;
}

#endif //TINYSTL_IS_POD_H
