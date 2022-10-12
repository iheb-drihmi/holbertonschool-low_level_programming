#include "main.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers
 *@n: the number of elements of the array to be printed
 *@a: pointer
 *Return: return
 *
 */
void print_array(int *a, int n)

{
	int b;

	b = 0;
	while (b < n)
	{
		printf("%d", a[b]);

		if (b < n - 1)
		{
			printf(", ");
		}

		b++;
	}

	printf("\n")
		;
}
