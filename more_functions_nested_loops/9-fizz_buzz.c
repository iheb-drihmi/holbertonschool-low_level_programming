#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description: numbers 1 to 100 
 * Return: Always(0)
 *
 */
int main(void)
{
int mul;
while (mul++ < 100)

if ((mul % 3 == 0) && (mul % 5 == 0))
printf("FizzBuzz ");

else if ((mul % 3) == 0)
printf("Fizz ");

else if ((mul % 5) == 0)
{
if (mul != 100)
printf("Buzz ");

else
printf("Buzz");
}

else
printf("%d ", mul);

printf("\n");
return (0);
}
