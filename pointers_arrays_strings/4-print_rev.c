#include "main.h"
/**
 * _puts -print a stirng
 *@str: print
 */
void _puts(char *str)
{
        int ch = 0;

        while (str[ch] != '\0')
        {
                _putchar(str[ch]);
                ch++;
        }
	strrev(s);//reversing string
	_putchar(str[ch]);
	ch++;
        _putchar('\n');
}
