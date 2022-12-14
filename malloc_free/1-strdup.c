#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated
 *
 * @str: The string
 * Return: return
 */

char *_strdup(char *str)
{
	char *alloc;
	unsigned int a;
	unsigned int length_of_string = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + length_of_string) != '\0')
		length_of_string++;

	length_of_string++;

	alloc = malloc(sizeof(*str) * length_of_string);

	if (alloc == NULL)
		return ('\0');

	for (a = 0; a < length_of_string; a++)
		alloc[a] = *(str + a);

	alloc[a] = '\0';

	return (alloc);
}
