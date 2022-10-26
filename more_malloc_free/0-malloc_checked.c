#include <stdio.h>
#include <stdlib.h>

/**
*malloc_checked - a function that allocates memoru using malloc
*@b:unsigned int
*Return:return
*/
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}