#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to be printed.
 * @size: The number of bytes to print.
 */
void print_buffer(char *b, int size)
{
int i, j;
if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);  /* Print the position in hexadecimal */
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
printf("%02x", (unsigned char)b[i + j]);
}
else
}
printf("  ");  /* Padding for incomplete lines */
}
if (j % 2 == 1)
{
printf(" ");  /* Space between pairs of hexadecimal values */
}
}
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
char c = b[i + j];
printf("%c", (c >= 32 && c <= 126) ? c : '.');
}
}
printf("\n");
}
}
