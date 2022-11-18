#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int b;

	for (i = 63; i >= 0; i--)
	{
		b = n >> i;

		if (b & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('1');
}
