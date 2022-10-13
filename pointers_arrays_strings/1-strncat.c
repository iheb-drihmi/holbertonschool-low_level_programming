
#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest:  pointer 
 *@src:  pointer
 *@n: value
 *Return: return
 */

char *_strncat(char *dest, char *src, int n)

{
int a, b;

a = 0;
while (dest[a] != '\0')
{
a++;
}

b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[a];
b++;
a++;
}

dest[a] = '\0';

return (dest);
}
