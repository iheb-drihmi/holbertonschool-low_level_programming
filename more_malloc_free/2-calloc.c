#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: int
 * @size: int
 * Return: return
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
	{
		a[b] = 0;
	}
	return (a);
}
