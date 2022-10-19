#include "main.h"
#include "main.h"
/**
 *_memset - a function that fills memory with a constant byte.
 * @n: number
 * @b: byte
 * @s: a pointer to the memory area
 * Return: return
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
