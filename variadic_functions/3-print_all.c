#include "variadic_functions.h"
#include<stdlib.h>
#include <stdio.h>
void print_all(const char * const format, ...)
{
	va_list countptr;
	int x, arg_len;
	char *separator = "";

	prints_t fmt_list[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(countptr, format);
	x = 0;
	while (format && (*(format + x)))
	{
		arg_len = 0;
		while (arg_len < 4 && (*(format + x) != *(fmt_list[arg_len].notation)))
		{
			arg_len++;
		}
		if (arg_len < 4)
		{
			printf("%s", separator);
			fmt_list[arg_len].print_dType(countptr);
			separator = ", ";
		}
		x++;
	}
	printf("\n");
	va_end(countptr);
}