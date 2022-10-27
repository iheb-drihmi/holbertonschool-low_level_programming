#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: min
 * @max: max
 * Return: return
 */
int *array_range(int min, int max)
{
	int *a, b = 0, s = min;

	if (min > max)
		return (0);
	a = malloc((max - min + 1) * sizeof(int));

	if (!a)
		return (0);
	while (b <= max - min)
		a[b++] = s++;
	return (a);
}