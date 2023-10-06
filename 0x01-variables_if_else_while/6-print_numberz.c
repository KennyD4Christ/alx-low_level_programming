#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This program prints all single-digit numbers of base 10 starting from 0,
 * followed by a new line, using only the putchar function twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0'); /* Convert the integer to its corresponding character */
}
putchar('\n'); /* Print a newline character */
return (0);
}
