#include "main.h"
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int number = 98;
int last_digit;
if (number < 0)
{
number = -number;
}
last_digit = number % 10;
_putchar('0' + last_digit);
_putchar('\n');

return (last_digit);
}
