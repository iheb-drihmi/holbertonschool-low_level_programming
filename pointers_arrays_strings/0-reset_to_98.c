#include "main.h"
/**
 * reset_to_98 - takes a pointer to an int as paremeter and updates the value 
 *
 * @n: pointer to be update
 */
void reset_to_98(int *n)
{
	int x= 10;
	int *n = &x;
	*n=98;
}
