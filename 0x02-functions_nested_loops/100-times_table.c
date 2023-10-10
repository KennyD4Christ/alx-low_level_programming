#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table.
 * @n: The number to print the times table for.
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int row, column, result;
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
result = row * column;
if (column > 0)
printf(", ");
if (result < 10)
printf(" ");
else if (result < 100)
printf(" ");
printf("%d", result);
}
printf("\n");
}
}
}
