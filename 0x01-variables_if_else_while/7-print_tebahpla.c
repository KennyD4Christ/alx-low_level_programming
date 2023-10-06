#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet in reverse,
 * followed by a new line, using only the putchar function as per the
 * specified requirements.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
