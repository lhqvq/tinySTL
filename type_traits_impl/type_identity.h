//
// Created by LHQvQ on 2023/5/28.
//

#ifndef TINYSTL_TYPE_IDENTITY_H
#define TINYSTL_TYPE_IDENTITY_H

namespace lhqvq {
    template <typename T>
    struct type_identity {
        using type = T;
    };

    template <typename T>
    using type_identity_t = typename lhqvq::type_identity<T>::type;
}

#endif //TINYSTL_TYPE_IDENTITY_H
