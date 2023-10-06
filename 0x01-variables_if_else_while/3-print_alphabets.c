#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet, followed by
 * the uppercase alphabet, and then a new line, using the putchar function
 * with only three uses of putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
letter = 'A';
while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
