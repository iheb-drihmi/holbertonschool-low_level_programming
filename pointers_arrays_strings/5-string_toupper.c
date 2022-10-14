#include "main.h"
/**
 * string_toupper - function that change all lowercase to uppercase
 * @str: parameter
 * Return: return
 */

char *string_toupper(char *str)
{
	int ch;

	ch = 0;
	while (str[ch] != '\0')
	{
		if (str[ch] >= 'a' && str[ch] <= 'z')
			str[ch] = str[ch] - 32;
		ch++;
	}
	return (str);
}


