#include "main.h"

/**
 * string_toupper - function that change all lowercase to uppercase
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *)
{
	int ch;

	ch = 0;
	while (n[ch] != '\0')
	{
		if (n[ch] >= 'a' && n[ch] <= 'z')
			n[ch] = n[ch] - 32;
		ch++;
	}
	return (n);
}	



