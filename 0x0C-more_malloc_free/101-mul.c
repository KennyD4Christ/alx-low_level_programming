#include <stdio.h>
#include <stdlib.h>

/**
 *  * is_digit - Check if a string is composed of digits.
 *   * @str: The string to check.
 *    *
 *     * Return: (1) if all characters are digits, (0) otherwise.
 */
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
{
return (0);
}
str++;
}
return (1);
}
/**
 *  * multiply - Multiply two positive numbers.
 *   * @num1: First number.
 *    * @num2: Second number.
 *     *
 *      * Return: The product of num1 and num2.
 */
int multiply(char *num1, char *num2)
{
int result = atoi(num1) * atoi(num2);
return (result);
}
int main(int argc, char *argv[])
{
int result;
if (argc != 3)
{
printf("Error\n");
return (98);
}
if (!is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}
result = multiply(argv[1], argv[2]);
printf("%d\n", result);
return (0);
}
