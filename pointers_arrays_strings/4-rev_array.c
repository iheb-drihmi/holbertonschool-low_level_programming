#include "main.h"
/**
 * reverse_array - a function that reverse array of integers
 * @a: array
 * @n: number 
 * Return: return
 */
void reverse_array(int *a, int n)
{
	int b;
	int tmp;

	for (b = 0; b < n--; b++)
	{
		tmp = a[b];
		a[b] = a[n];
		a[n] = tmp;
	}
}
