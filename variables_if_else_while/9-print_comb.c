#include<stdio.h>
#include<ctype.h>
/**
 * main - Print all possible combinations of single-digit numbers
 * Return : always (0) succes
 */
int main(void)
{
	int n;
	for (n='0'; n <= '9' ; n++)
{
	putchar (n);
	if( n == '9' )
	continue ;
	putchar(',');
	putchar(' ');	
}
	putchar ('\n');
	return(0);
} 

