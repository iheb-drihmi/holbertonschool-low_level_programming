#include "main.h"
/**
 * _strlen_recursion: a function that return the length of a string.
 *@s: character
 * Description : retunr the length of a string
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
