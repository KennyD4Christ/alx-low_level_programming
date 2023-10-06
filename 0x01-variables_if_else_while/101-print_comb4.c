#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible different combinations of
 * three digits in ascending order, separated by a comma and space. It uses the
 * putchar function with only six uses, as per the specified requirements.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int hundreds_digit;
int tens_digit;
int ones_digit;
for (hundreds_digit = 0; hundreds_digit <= 7; hundreds_digit++)
{
for (tens_digit = hundreds_digit + 1; tens_digit <= 8; tens_digit++)
{
for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
{
putchar(hundreds_digit + '0');
putchar(tens_digit + '0');
putchar(ones_digit + '0');
if (hundreds_digit < 7 || tens_digit < 8 || ones_digit < 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
