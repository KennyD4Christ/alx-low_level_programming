#include "main.h"
/**
 * print_last_digit - Prints and returns the last digit of an integer
 * @n: The integer to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;
/* Ensure n is positive or zero to extract the last digit correctly */
if (n < 0)
{
n = -n;
}
last_digit = n % 10; /* Get the last digit */
_putchar(last_digit + '0'); /* Print the last digit as a character */
return (last_digit); /* Return the value of the last digit */
}
