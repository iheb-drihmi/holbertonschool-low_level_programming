#include "main.h"

/**
 * clear_bit - clear bit 
 * @n: number
 * @index: index
 *
 * Return: return
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}