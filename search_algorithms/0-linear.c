#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array of integers 
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 * Return: return
 */
 int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%u] = [%d]\n", j, array[j]);
		if (value == array[j])
			return (j);
	}
	return (-1);
}
