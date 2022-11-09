#include "variadic_functions.h"
#include<stdlib.h>
#include <stdio.h>
/**
 * print_char - Prints a char.
 * @arg: argument
 */
void print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	printf("%c", character);
}

/**
 * print_int - Prints an int.
 * @arg: argument
 */
void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - Prints a float.
 * @arg: argument
 */
void print_float(va_list arg)
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}

/**
 * print_string - Prints a string.
 * @arg: argument
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
void print_all(const char * const format, ...)