#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - a function that returns a pointer to a 2 dimensional array of integers.
 *@width:width
 *@height:heigth
 *Return:return
 */
int **alloc_grid(int width, int height)
{
	int a = 0, b;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int *));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		arr[a] = (int *)malloc(width * sizeof(int));
		if (!arr[a])
		{
			for (b = 0; b <= a; b++)
			{
				free(arr[b]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			arr[a][b] = 0;
		}
	}
	return (arr);
}