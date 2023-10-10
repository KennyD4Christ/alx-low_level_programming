#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
_putchar('0' + last_digit);  /* Print the last digit as a character */
return (last_digit);  /* Return the value of the last digit */
}
