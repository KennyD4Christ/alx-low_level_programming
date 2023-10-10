#include "main.h"
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
n = -n;  // Make sure the number is positive for proper calculation
}
last_digit = n % 10;  // Get the last digit using modulo operator
_putchar(last_digit + '0');  // Print the last digit as a character
return (last_digit);  // Return the value of the last digit
}
