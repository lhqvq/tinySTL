//
// Created by LHQvQ on 2023/5/28.
//

#ifndef TINYSTL_TYPE_TRAITS_H
#define TINYSTL_TYPE_TRAITS_H

#include "type_traits_impl/type_identity.h"
#include "type_traits_impl/value_identity.h"
#include "type_traits_impl/integral_constant.h"
#include "type_traits_impl/remove_cv.h"
#include "type_traits_impl/is_same.h"

// Primary type categories
#include "type_traits_impl/is_void.h"
#include "type_traits_impl/is_null_pointer.h"
#include "type_traits_impl/is_integral.h"
#include "type_traits_impl/is_floating_point.h"
#include "type_traits_impl/is_array.h"
#include "type_traits_impl/is_enum.h"
#include "type_traits_impl/is_union.h"
#include "type_traits_impl/is_class.h"
#include "type_traits_impl/is_function.h"
#include "type_traits_impl/is_pointer.h"
#include "type_traits_impl/is_lvalue_reference.h"
#include "type_traits_impl/is_rvalue_reference.h"
#include "type_traits_impl/is_member_object_pointer.h"
#include "type_traits_impl/is_member_function_pointer.h"

// Composite type categories
#include "type_traits_impl/is_fundamental.h"
#include "type_traits_impl/is_arithmetic.h"
#include "type_traits_impl/is_scalar.h"
#include "type_traits_impl/is_object.h"
#include "type_traits_impl/is_compound.h"
#include "type_traits_impl/is_reference.h"
#include "type_traits_impl/is_member_pointer.h"

// Type properties
#include "type_traits_impl/is_const.h"
#include "type_traits_impl/is_volatile.h"
#include "type_traits_impl/is_trivial.h"
#include "type_traits_impl/is_trivially_copyable.h"
#include "type_traits_impl/is_standard_layout.h"
#include "type_traits_impl/is_pod.h"




#endif //TINYSTL_TYPE_TRAITS_H
