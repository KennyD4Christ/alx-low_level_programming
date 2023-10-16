#include "main.h"
/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to a string
 *
 * Description: This function prints each character of the input string
 * followed by a new line.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
