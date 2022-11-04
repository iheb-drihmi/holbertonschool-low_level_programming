#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator:separator
 * @n: number
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list countptr;
	unsigned int x;

	va_start(countptr, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(countptr, int));
		if (separator && x < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(countptr);
}