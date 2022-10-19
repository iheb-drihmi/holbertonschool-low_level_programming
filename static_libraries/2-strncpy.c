#include "main.h"
/**
 *_strncpy - function that copies a string
 *
 *@dest:destination
 *@src:source
 *@n:range
 *
 *Return:return
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
