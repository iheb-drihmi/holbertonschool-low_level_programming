#include "main.h"
/**
* str_concat - a function that concatenates two strings
*@s1:The first string
*@s2:The second string
*Return: return
*/
char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int i, concat_index = 0,  length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	str_concat = malloc(sizeof(char) * length);

	if (str_concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str_concat[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		str_concat[concat_i++] = s2[i];

	return (str_concat);
}