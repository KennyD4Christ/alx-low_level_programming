#include "main.h"
/**
 *  * _puts - Print a string to the standard output
 *   * @str: The string to be printed
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
}
