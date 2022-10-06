#include "main.h"
/**
*print_numbers - function that print all numbers from 0 to 9
*
*
*Return: return
*/
void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
