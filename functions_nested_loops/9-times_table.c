#include "main.h"
/**
 * times_table - Prints the 9 times table
 */
void times_table(void);
{
int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}
