#include "main.h"
/**
 * puts2 - Prints every other character of a string followed by a new line
 * @str: Pointer to a string
 *
 * Description: This function prints every other character of the input string,
 * starting with the first character, followed by a new line.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;  /* Increment the index by 2 to skip every other character */
}
_putchar('\n');  /* Print a new line after the characters */
}
