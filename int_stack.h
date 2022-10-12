#ifndef INT_STACK_H
#define INT_STACK_H

#define USE_CUSTOM_ELEMENT
typedef int element_t;
const element_t element_poison = (int)0xDEADBEEF;

inline int IsPoison(element_t element) { return element == element_poison; }

#define ELEMENT_SPEC "%d"
#define ELEMENT_ARGS(element) (element)

#include "_stack_interface.h"

#endif