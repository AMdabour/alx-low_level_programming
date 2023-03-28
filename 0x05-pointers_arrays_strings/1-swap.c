#include "main.h"

/**
 * swap_int - swap the values of tow integers
 *
 * @a: the pointer for the first integer
 *
 * @b: the pointer for the second integer
*/

void swap_int(int *a, int *b)
{
	*a = b;

	*b = a;
}
