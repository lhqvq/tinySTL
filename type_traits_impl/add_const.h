//
// Created by LHQvQ on 2023/6/15.
//

#ifndef TINYSTL_ADD_CONST_H
#define TINYSTL_ADD_CONST_H

namespace lhqvq {
    template <typename T>
    struct add_const { typedef const T type; };

    template <typename T>
    using add_const_t = typename lhqvq::add_const<T>::type;
}

#endif //TINYSTL_ADD_CONST_H
