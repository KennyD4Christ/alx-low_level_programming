#include "main.h"
/**
 * print_last_digit - Prints and returns the last digit of a number.
 * @n: The input number.
 *
 * Return: The last digit of the input number.
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
last_digit = -n % 10;
}
else
{
last_digit = n % 10;
}
_putchar(last_digit + '0');  /* Print the last digit as a character */
return (last_digit);
}
