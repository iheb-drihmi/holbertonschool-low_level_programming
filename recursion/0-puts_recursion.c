#include "main.h"
/**
* _puts_recursion - prints a string
*@s:character
*Return:return
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
