#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which to print the times table.
 *
 * Return: No return value.
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return;
}
int i, j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;
if (j > 0)
{
_putchar(' ');
if (result < 10)
_putchar(' ');
}
if (result < 10)
_putchar(' ');
if (result < 100)
_putchar(' ');
_putchar('0' + result);
if (j < n)
_putchar(',');
else
_putchar('\n');
}
}
}
