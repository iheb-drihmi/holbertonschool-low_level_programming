#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of time characters should be printed
 */
void print_diagonal(int n)
{
	int count = 0, size;

	if (n > 0)
	{
		while (count < n)
		{
			for (size = 0; size < count; size++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
