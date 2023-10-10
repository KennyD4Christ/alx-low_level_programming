#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which the times table is generated.
 *
 * Return: No return value (void).
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;
int i, j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;
if (j == 0)
_putchar('0');
else
_putchar(' ');
if (result < 10)
_putchar(' ');
else
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
if (j != n)
_putchar(',');
else
_putchar('\n');
}
}
}
