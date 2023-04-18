#ifndef ABS_H
#define ABS_H
#include <ctype.h>

/**
 * ABS - a function like macro to compute the abs value of x
 * @x: the value to be absolutely computed
 */
#define ABS(x) (x > 1 ? (1 * x) : (-1 * x))

#endif
