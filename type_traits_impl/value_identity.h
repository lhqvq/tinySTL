//
// Created by LHQvQ on 2023/5/28.
//

#ifndef TINYSTL_VALUE_IDENTITY_H
#define TINYSTL_VALUE_IDENTITY_H

namespace lhqvq {
    template <auto X>
    struct value_identity {
        static constexpr auto value = X;
    };

    template <auto X>
    inline constexpr auto value_identity_v = value_identity<X>::value;
}

#endif //TINYSTL_VALUE_IDENTITY_H
