#include "main.h"
/**
*print_line - prints a straight line
*@n:number of times the character _ should be printed
*Return:returns nothing
*/
void print_line(int n)
{
	int c = 0;

	while ((c <  n) && (n > 0))
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
