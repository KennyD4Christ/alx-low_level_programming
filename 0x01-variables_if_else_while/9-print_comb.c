#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations of single-digit
 * numbers in ascending order, separated by a comma and space. It uses the
 * putchar function with only four uses, as per the specified requirements.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0');
if (digit < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
