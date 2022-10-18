#include "main.h"
/**
 * _strlen_recursion: a function that return the length of a string.
 *Description: a function that return the length of a string.
 * @s:  a string
 * Return: return
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
