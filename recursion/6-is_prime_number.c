#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer 
 * @n: number
 * Return: return
 */
int is_prime_number(int n)
{
	int begin = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, begin));
}

/**
 * is_prime - returns the 1
 * @n: number
 * @beginning: number to begin
 * Return: return
 */
int is_prime(int n, int begin)
{
	if (begin <= 1)
		return (1);
	else if (n % begin == 0)
		return (0);
	return (is_prime(n, begin - 1));
}