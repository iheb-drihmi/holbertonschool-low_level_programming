#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: a string 
 * @c: a character
 * Return: return
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return ('\0');
}
