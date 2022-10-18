#include "main.h"
/**
 *_sqrt_recursion - a function that returns the natural sqaure
 *
 *@n: int 
 *@i: value 
 *Return:return
 */
int _sqrt_recursion(int n, int b)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((b * b) > n)
	{
		return (-1);
	}
	if ((b * b) == n)
	{
		return (b);
	}
	return (_sqrt(n, b + 1));
}
