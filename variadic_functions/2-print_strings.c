#include "variadic_functions.h"
#include<stdlib.h>
#include <stdio.h>
/**
* print_strings - prints strings
*@separator: separator
*@n: number
*
*Return: return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

va_list countptr;
unsigned int x;
char *str;

va_start(countptr, n);

for (x = 0; x < n; x++)
{
str = va_arg(countptr, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (x != (n - 1) && separator != NULL)
printf("%s", separator);

}

printf("\n");
va_end(li);
}
