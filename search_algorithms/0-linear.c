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
	size_t i;

	for (i = 0; i < size; i++)
	{
		
		if (array[i] == value)
			return (1);
	}
	return (0);
}