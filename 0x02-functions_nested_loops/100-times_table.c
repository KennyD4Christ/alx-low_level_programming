#include <stdio.h>
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The value up to which the times table is generated.
 *
 * If n is greater than 15 or less than 0, the function does not print anything
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
int result = i * j;
if (j > 0)
printf(", ");
if (result < 10)
printf("  ");
else if (result < 100)
printf(" ");
printf("%d", result);
}
printf("\n");
}
}
int main(void)
{
int n = 12;
print_times_table(n);
return (0);
}
