#include "variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n:argument
 * Return: return
 */
int sum_them_all(const unsigned int n, ...)
{
	
	va_list countptr;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(countptr, n);

	for (x = 0; x < n; x++)
		sum += va_arg(countptr, int);

	va_end(countptr);

	return (sum);
}

