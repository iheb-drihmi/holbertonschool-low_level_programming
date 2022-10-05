#include "main.h"
/**
* print_sign - Print the sign of anumber
* @n: The sign of a number .
*
* Return: 1 if the number is greater than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
