#include "main.h"

/**
 * string_toupper - function that change all lowercase to uppercase
 * @n: pointer
 * Return: return
 */

char *string_toupper(char *)
{
	int ch;

	while (str[ch] != '\0')
	{
		if (str[ch] >= 'a' && str[ch] <= 'z')
			str[ch] -= 32;
		ch++;
	}
	return (ch);	


