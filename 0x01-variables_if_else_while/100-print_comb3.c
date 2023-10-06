#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible different combinations of
 * two digits in ascending order, separated by a comma and space. It uses the
 * putchar function with only five uses, as per the specified requirements.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int tens_digit;
int ones_digit;
for (tens_digit = 0; tens_digit <= 8; tens_digit++)
{
for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
{
putchar(tens_digit + '0');
putchar(ones_digit + '0');
if (tens_digit < 8 || ones_digit < 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
