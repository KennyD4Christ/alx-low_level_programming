#include <stdio.h>
#include <stdlib.h>

/**
 *  * is_valid_number - Checks if a string is a valid positive number.
 *   * @str: The input string.
 *    *
 *     * Return: 1 if the string is a valid positive number, 0 otherwise.
 */
int is_valid_number(const char *str)
{
if (*str == '\0')
return (0);
while (*str != '\0')
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}
/**
 *  * multiply - Multiplies two positive numbers.
 *   * @num1: The first number.
 *    * @num2: The second number.
 *     *
 *      * Return: The result of the multiplication.
 */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
return (num1 * num2);
}
int main(int argc, char *argv[])
{
unsigned int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (98);
}
if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = multiply(num1, num2);
printf("(%u)\n", result);
return (0);
}
