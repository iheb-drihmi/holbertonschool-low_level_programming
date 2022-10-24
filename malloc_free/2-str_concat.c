#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* str_concat - a function that concatenates two strings
*@s1:The first string
*@s2:The second string
*Return: return
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	char *alloc_mem;
	unsigned int a, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_length) != '\0')
		s1_length++;

	while (*(s2 + s2_length) != '\0')
		s2_length++;

	alloc_mem = malloc(1 + (s1_length * sizeof(*s1)) + (s2_length * sizeof(*s2)));
	if (alloc_mem == NULL)
		return ('\0');

	for (a = 0; a < s1_length; a++)
		alloc_mem[a] = *(s1 + a);

	for (b = 0; b < s2_length; b++, a++)
		alloc_mem[a] = *(s2 + b);

	return (alloc_mem);
}
