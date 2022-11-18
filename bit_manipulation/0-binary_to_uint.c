#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to unsigned int
 * @b: string
 * Return: return
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int len, i;
	int d = 1;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	i = (len - 1);
	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			sum += d;
		d *= 2;
	}

	return (sum);
}