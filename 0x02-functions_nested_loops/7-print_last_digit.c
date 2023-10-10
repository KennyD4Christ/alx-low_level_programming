#include "main.h"
/**
 * print_last_digit - Returns the value of the last digit of a number.
 * @num: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int num)
{
int last_digit;
if (num < 0)
num = -num;
last_digit = num % 10;
return (last_digit);
}
