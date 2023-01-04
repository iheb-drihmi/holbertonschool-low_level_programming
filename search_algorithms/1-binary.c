#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in a sorted array
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 * Return: return
 */
int binary_search(int *array, size_t size, int value)
{
size_t j, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}

	return (-1);
}
