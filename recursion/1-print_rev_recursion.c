#include "main.h"
#include <stdio.h>
/**
* _rev_recursion - prints a string in reverse
*@s:character
*Return:return
*/
void _print_rev_recursion(char *s)
{
	 if (*s)
   {
       _print_rev_recursion(s + 1);
       _putchar(*s);
   }
}
