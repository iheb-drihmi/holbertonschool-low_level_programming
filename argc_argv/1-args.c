#include <stdio.h>
/**
 *main - a program that prints the number of arguments 
 *@argc:count
 *@argv:vector
 *Return:0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

