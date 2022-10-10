#include "main.h"
/**
 * _puts -print a  stirng in reverse
 *@s: print
 */
void print_rev(char *s)
{
        int ch = 0;

        while (s[ch] != '\0')
        {
                
                ch++;
        }
	ch--;
	while (ch >= 0)
	{
		-putchar(s[ch]);
		ch--;
	}
        _putchar('\n');
}
