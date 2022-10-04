#include "main.h"

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int l;
	for (l = 'a' ; l <= 'z' ; l++)
	{ 
     	_putchar(l) ;
	}
	_putchar('\n');
	 return (0);
}

