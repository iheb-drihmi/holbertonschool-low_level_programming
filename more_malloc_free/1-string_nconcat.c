#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: bytes.
 * Return: return
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int ls1, ls2, la, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	la = ls1 + n;

	a = malloc(la + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < la; i++)
		if (i < ls1)
			a[i] = s1[i];
		else
			a[i] = s2[i - ls1];

	a[i] = '\0';

	return (a);
}



