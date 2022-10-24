#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_prime_number - a function that returns 1 if the input integer 
 * @n: number
 * Return: return
 */
 int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns the 1
 * @n: number
 * @beginning: number to begin
 * Return: return
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}