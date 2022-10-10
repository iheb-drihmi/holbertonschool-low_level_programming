#include "main.h"

/**
 * swap_int - a function thatswap the value of two integers.
 *
 * @a: first number
 * @b: second number
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
