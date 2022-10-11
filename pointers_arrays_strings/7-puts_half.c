#include "main.h"

/**
 *puts_half - prints half of a string
 *@str: prints half of a string
 *
 *Return: return
 */
void puts_half(char *str)

{
int i, half;

i = 0;
while (str[i] != '\0')
{
i++;
}

half = (i + 1) / 2;

for (i = half; str[i]; i++)
{
_putchar (str[i]);
}

_putchar ('\n');

}
