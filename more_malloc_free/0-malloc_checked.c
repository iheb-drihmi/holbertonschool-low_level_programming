#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - a function that allocates memory using malloc
 *@b:unsigned  int 
 *Return:return
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}