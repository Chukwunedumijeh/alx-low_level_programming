#include "main.h"

/**
 * swap_int - switch value of the
 *first input with the value of the second input
 * @a: first value to swap
 * @b: second value to swap
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
