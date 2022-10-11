#include "main.h"
/**
 *print_rev -print a  stirng in reverse
 *@s: print
 * Description: print_rev
 */

void print_rev(char *s)
{
int ch = 0;

while (s[ch])
ch++;
while (ch--)
_putchar(s[ch]);

_putchar('\n');
}
