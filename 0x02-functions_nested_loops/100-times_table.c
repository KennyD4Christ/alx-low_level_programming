#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table
 * @n: The number to generate the times table for
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i, j, product;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;
if (j == 0)
printf("%d", product);
else
printf(", %3d", product);
if (j == n)
printf("\n");
}
}
}
}
