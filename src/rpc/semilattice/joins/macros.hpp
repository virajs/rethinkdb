#ifndef __RPC_SEMILATTICE_JOINS_MACROS_HPP__
#define __RPC_SEMILATTICE_JOINS_MACROS_HPP__

/* This file is automatically generated by '../scripts/generate_join_macros.py'.
Please modify '../scripts/generate_join_macros.py' instead of modifying this file.*/

#include "errors.hpp"
#include <boost/serialization/access.hpp>

/* The purpose of these macros is to make it easier to define semilattice joins
for types that consist of a fixed set of fields which it is a simple product of.
In the same namespace as the type, call `RDB_MAKE_SEMILATTICE_JOINABLE_[n]()`,
where `[n]` is the number of fields in the type. The first parameter is the name
of the type; the remaining parameters are the fields. You will also need an
`==` operator; for this you can use `RDB_MAKE_EQUALITY_COMPARABLE_[n]()`.

Example:
    struct point_t {
        vclock_t<int> x, y;
    };
    RDB_MAKE_SEMILATTICE_JOINABLE_2(point_t, x, y)

You can also use this with templated types, but it's pretty hacky:
    template<class T>
    struct pair_t {
        T a, b;
    };
    template<class T>
    RDB_MAKE_SEMILATTICE_JOINABLE_2(pair_t<T>, a, b)
*/

#define RDB_MAKE_SEMILATTICE_JOINABLE_0(type_t) \
    inline void semilattice_join(UNUSED type_t *__a, UNUSED const type_t &__b) { \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_0(type_t) \
    inline bool operator==(UNUSED const type_t &__a, UNUSED const type_t &__b) { \
        return true; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_1(type_t, field1) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_1(type_t, field1) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_2(type_t, field1, field2) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_2(type_t, field1, field2) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_3(type_t, field1, field2, field3) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_3(type_t, field1, field2, field3) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_4(type_t, field1, field2, field3, field4) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_4(type_t, field1, field2, field3, field4) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_5(type_t, field1, field2, field3, field4, field5) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_5(type_t, field1, field2, field3, field4, field5) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_6(type_t, field1, field2, field3, field4, field5, field6) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_6(type_t, field1, field2, field3, field4, field5, field6) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_7(type_t, field1, field2, field3, field4, field5, field6, field7) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_7(type_t, field1, field2, field3, field4, field5, field6, field7) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_8(type_t, field1, field2, field3, field4, field5, field6, field7, field8) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
        semilattice_join(&__a->field8, __b.field8); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_8(type_t, field1, field2, field3, field4, field5, field6, field7, field8) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7 && __a.field8 == __b.field8; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_9(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
        semilattice_join(&__a->field8, __b.field8); \
        semilattice_join(&__a->field9, __b.field9); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_9(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7 && __a.field8 == __b.field8 && __a.field9 == __b.field9; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_10(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
        semilattice_join(&__a->field8, __b.field8); \
        semilattice_join(&__a->field9, __b.field9); \
        semilattice_join(&__a->field10, __b.field10); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_10(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7 && __a.field8 == __b.field8 && __a.field9 == __b.field9 && __a.field10 == __b.field10; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_11(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
        semilattice_join(&__a->field8, __b.field8); \
        semilattice_join(&__a->field9, __b.field9); \
        semilattice_join(&__a->field10, __b.field10); \
        semilattice_join(&__a->field11, __b.field11); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_11(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7 && __a.field8 == __b.field8 && __a.field9 == __b.field9 && __a.field10 == __b.field10 && __a.field11 == __b.field11; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_12(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
        semilattice_join(&__a->field8, __b.field8); \
        semilattice_join(&__a->field9, __b.field9); \
        semilattice_join(&__a->field10, __b.field10); \
        semilattice_join(&__a->field11, __b.field11); \
        semilattice_join(&__a->field12, __b.field12); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_12(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7 && __a.field8 == __b.field8 && __a.field9 == __b.field9 && __a.field10 == __b.field10 && __a.field11 == __b.field11 && __a.field12 == __b.field12; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_13(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
        semilattice_join(&__a->field8, __b.field8); \
        semilattice_join(&__a->field9, __b.field9); \
        semilattice_join(&__a->field10, __b.field10); \
        semilattice_join(&__a->field11, __b.field11); \
        semilattice_join(&__a->field12, __b.field12); \
        semilattice_join(&__a->field13, __b.field13); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_13(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7 && __a.field8 == __b.field8 && __a.field9 == __b.field9 && __a.field10 == __b.field10 && __a.field11 == __b.field11 && __a.field12 == __b.field12 && __a.field13 == __b.field13; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_14(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13, field14) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
        semilattice_join(&__a->field8, __b.field8); \
        semilattice_join(&__a->field9, __b.field9); \
        semilattice_join(&__a->field10, __b.field10); \
        semilattice_join(&__a->field11, __b.field11); \
        semilattice_join(&__a->field12, __b.field12); \
        semilattice_join(&__a->field13, __b.field13); \
        semilattice_join(&__a->field14, __b.field14); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_14(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13, field14) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7 && __a.field8 == __b.field8 && __a.field9 == __b.field9 && __a.field10 == __b.field10 && __a.field11 == __b.field11 && __a.field12 == __b.field12 && __a.field13 == __b.field13 && __a.field14 == __b.field14; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_15(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13, field14, field15) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
        semilattice_join(&__a->field8, __b.field8); \
        semilattice_join(&__a->field9, __b.field9); \
        semilattice_join(&__a->field10, __b.field10); \
        semilattice_join(&__a->field11, __b.field11); \
        semilattice_join(&__a->field12, __b.field12); \
        semilattice_join(&__a->field13, __b.field13); \
        semilattice_join(&__a->field14, __b.field14); \
        semilattice_join(&__a->field15, __b.field15); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_15(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13, field14, field15) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7 && __a.field8 == __b.field8 && __a.field9 == __b.field9 && __a.field10 == __b.field10 && __a.field11 == __b.field11 && __a.field12 == __b.field12 && __a.field13 == __b.field13 && __a.field14 == __b.field14 && __a.field15 == __b.field15; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_16(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13, field14, field15, field16) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
        semilattice_join(&__a->field8, __b.field8); \
        semilattice_join(&__a->field9, __b.field9); \
        semilattice_join(&__a->field10, __b.field10); \
        semilattice_join(&__a->field11, __b.field11); \
        semilattice_join(&__a->field12, __b.field12); \
        semilattice_join(&__a->field13, __b.field13); \
        semilattice_join(&__a->field14, __b.field14); \
        semilattice_join(&__a->field15, __b.field15); \
        semilattice_join(&__a->field16, __b.field16); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_16(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13, field14, field15, field16) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7 && __a.field8 == __b.field8 && __a.field9 == __b.field9 && __a.field10 == __b.field10 && __a.field11 == __b.field11 && __a.field12 == __b.field12 && __a.field13 == __b.field13 && __a.field14 == __b.field14 && __a.field15 == __b.field15 && __a.field16 == __b.field16; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_17(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13, field14, field15, field16, field17) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
        semilattice_join(&__a->field8, __b.field8); \
        semilattice_join(&__a->field9, __b.field9); \
        semilattice_join(&__a->field10, __b.field10); \
        semilattice_join(&__a->field11, __b.field11); \
        semilattice_join(&__a->field12, __b.field12); \
        semilattice_join(&__a->field13, __b.field13); \
        semilattice_join(&__a->field14, __b.field14); \
        semilattice_join(&__a->field15, __b.field15); \
        semilattice_join(&__a->field16, __b.field16); \
        semilattice_join(&__a->field17, __b.field17); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_17(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13, field14, field15, field16, field17) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7 && __a.field8 == __b.field8 && __a.field9 == __b.field9 && __a.field10 == __b.field10 && __a.field11 == __b.field11 && __a.field12 == __b.field12 && __a.field13 == __b.field13 && __a.field14 == __b.field14 && __a.field15 == __b.field15 && __a.field16 == __b.field16 && __a.field17 == __b.field17; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_18(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13, field14, field15, field16, field17, field18) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
        semilattice_join(&__a->field8, __b.field8); \
        semilattice_join(&__a->field9, __b.field9); \
        semilattice_join(&__a->field10, __b.field10); \
        semilattice_join(&__a->field11, __b.field11); \
        semilattice_join(&__a->field12, __b.field12); \
        semilattice_join(&__a->field13, __b.field13); \
        semilattice_join(&__a->field14, __b.field14); \
        semilattice_join(&__a->field15, __b.field15); \
        semilattice_join(&__a->field16, __b.field16); \
        semilattice_join(&__a->field17, __b.field17); \
        semilattice_join(&__a->field18, __b.field18); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_18(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13, field14, field15, field16, field17, field18) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7 && __a.field8 == __b.field8 && __a.field9 == __b.field9 && __a.field10 == __b.field10 && __a.field11 == __b.field11 && __a.field12 == __b.field12 && __a.field13 == __b.field13 && __a.field14 == __b.field14 && __a.field15 == __b.field15 && __a.field16 == __b.field16 && __a.field17 == __b.field17 && __a.field18 == __b.field18; \
    }

#define RDB_MAKE_SEMILATTICE_JOINABLE_19(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13, field14, field15, field16, field17, field18, field19) \
    inline void semilattice_join(type_t *__a, const type_t &__b) { \
        semilattice_join(&__a->field1, __b.field1); \
        semilattice_join(&__a->field2, __b.field2); \
        semilattice_join(&__a->field3, __b.field3); \
        semilattice_join(&__a->field4, __b.field4); \
        semilattice_join(&__a->field5, __b.field5); \
        semilattice_join(&__a->field6, __b.field6); \
        semilattice_join(&__a->field7, __b.field7); \
        semilattice_join(&__a->field8, __b.field8); \
        semilattice_join(&__a->field9, __b.field9); \
        semilattice_join(&__a->field10, __b.field10); \
        semilattice_join(&__a->field11, __b.field11); \
        semilattice_join(&__a->field12, __b.field12); \
        semilattice_join(&__a->field13, __b.field13); \
        semilattice_join(&__a->field14, __b.field14); \
        semilattice_join(&__a->field15, __b.field15); \
        semilattice_join(&__a->field16, __b.field16); \
        semilattice_join(&__a->field17, __b.field17); \
        semilattice_join(&__a->field18, __b.field18); \
        semilattice_join(&__a->field19, __b.field19); \
    }
#define RDB_MAKE_EQUALITY_COMPARABLE_19(type_t, field1, field2, field3, field4, field5, field6, field7, field8, field9, field10, field11, field12, field13, field14, field15, field16, field17, field18, field19) \
    inline bool operator==(const type_t &__a, const type_t &__b) { \
        return __a.field1 == __b.field1 && __a.field2 == __b.field2 && __a.field3 == __b.field3 && __a.field4 == __b.field4 && __a.field5 == __b.field5 && __a.field6 == __b.field6 && __a.field7 == __b.field7 && __a.field8 == __b.field8 && __a.field9 == __b.field9 && __a.field10 == __b.field10 && __a.field11 == __b.field11 && __a.field12 == __b.field12 && __a.field13 == __b.field13 && __a.field14 == __b.field14 && __a.field15 == __b.field15 && __a.field16 == __b.field16 && __a.field17 == __b.field17 && __a.field18 == __b.field18 && __a.field19 == __b.field19; \
    }

#endif /* __RPC_SEMILATTICE_JOINS_MACROS_HPP__ */
