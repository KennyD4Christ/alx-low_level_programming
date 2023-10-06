#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet,
 * excluding the letters 'q' and 'e', followed by a new line.
 * It uses the putchar function with only two uses of putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
