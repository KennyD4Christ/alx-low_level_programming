#include "main.h"
int main(void)
{
int r;
print_last_digit(98);
print_last_digit(0);
r = print_last_digit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}
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
