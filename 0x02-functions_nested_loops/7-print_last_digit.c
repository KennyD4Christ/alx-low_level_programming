#include "main.h"
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
int num = 98;
int last_digit = print_last_digit(num);
_putchar('\n');
return (0);
}
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer from which to extract the last digit.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
n = -n;
last_digit = n % 10;
_putchar(last_digit + '0');
return (last_digit);
}
