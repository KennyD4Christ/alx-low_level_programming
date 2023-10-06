#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This program prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
putchar((num1 / 10) + '0'); /* Print the tens digit of num1 */
putchar((num1 % 10) + '0'); /* Print the ones digit of num1 */
putchar(' '); /* Print a space */
putchar((num2 / 10) + '0'); /* Print the tens digit of num2 */
putchar((num2 % 10) + '0'); /* Print the ones digit of num2 */
if (num1 != 98 || num2 != 99)
{
putchar(','); /* Print a comma */
putchar(' '); /* Print a space */
}
}
}
putchar('\n'); /* Print a newline character */
return (0);
}
