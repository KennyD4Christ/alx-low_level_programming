#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which to print the times table.
 *
 * Return: No return value.
 */
void print_times_table(int n)
{
if (n > 15 || n < 0)
{
return;
}
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
int product = i * j;
if (product < 10)
{
_putchar(' ');
_putchar(product + '0');
}
else
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
