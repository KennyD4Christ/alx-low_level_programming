#include "main.h"
/**
 * print_buffer - Prints a buffer
 * @size: size of the content of the buffer in bytes
 * @b: The pointer pointing to the buffer
 */
void print_buffer(char *b, int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
for (int i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (int j = 0; j < 10; j++)
{
if (j % 2 == 0)
}
_putchar('\t');
}
if (i + j < size)
{
int byte = b[i + j];
printf("%02x", (unsigned char)byte);
if (j % 2 == 1)
{
_putchar('\t');
}
}
else
{
printf("\t\t");
}
}
for (int j = 0; j < 10; j++)
{
if (i + j < size)
{
char ch = b[i + j];
_putchar((ch >= 32 && ch <= 126) ? ch : '.');
}
else
{
_putchar('\t');
}
}
_putchar('\n');
}
}
