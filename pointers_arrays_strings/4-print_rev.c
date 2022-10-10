#include "main.h"
/**
 * _puts -print a  stirng in reverse
 *@s: print
 */
void print_rev(char *s)
{
        int ch = 0;

        while (s[ch])
               ch++;
        while	(ch--)
		-putchar(s[ch]);
		
        _putchar('\n');
}
