#include "main.h"
/**
* create_array - a function that creates an array of chars
*@size: Size
*@c: Character
*Return: return
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		a[b] = c;

	return (a);
}
