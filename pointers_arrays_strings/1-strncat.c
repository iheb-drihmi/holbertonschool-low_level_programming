#include "main.h"
/**
 *_strncat - a function that conctenates two strings
 *
 *@dest:destination
 *@src:source
 *
 *Return:return
 *
 */
char *_strncat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
