#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of time characters should be printed
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 1; a <= n; b++)
	{
		for (b = 1; b <= a; b++)
		{
			if (a >= 2 && b <= a - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		if (a == n)
		{
			break;
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
