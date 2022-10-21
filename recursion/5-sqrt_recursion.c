#include "main.h"
/**
 * sqrt_check - Checks
 * @a: sqrt
 *
 * @b: Number to find sqrt of
 *
 * Return: return
 */
int sqrt_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrt_check(a + 1, b));
}
/**
 * sqrt_recursion - recursion
 *
 * @n: number
 *
 * Return: return
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
