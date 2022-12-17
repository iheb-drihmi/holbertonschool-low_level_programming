#include "main.h"
/**
 * *leet - a function that encodes a string into 1337
 * @str: string
 * Return: return
 */

char *leet(char *str)
{
	int c, d;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (c = 0; *(str + c); c++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (a[d] == str[c])
				str[c] = b[d];
		}
	}
	return (str);
}

