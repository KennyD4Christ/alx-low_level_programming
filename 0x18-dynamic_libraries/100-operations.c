#include <stdio.h>

/**
 * add - Adds two integers
 *  * @a: First integer
 *   * @b: Second integer
 *    *
 *Return: It returns the sum of the two integers
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - Subtracts two integers
 *  * @a: First integer
 *   * @b: Second integer
 *    *
 *Return: It returns the result of subtracting b from a
 */
int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - Multiplies two integers
 *  * @a: First integer
 *   * @b: Second integer
 *    *
 *Return: It returns the product of the two integers
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * div - Divides two integers
 *  * @a: Numerator
 *   * @b: Denominator
 *    *
 *Return: It returns the result of dividing a by b
 *If b is 0, prints an error message and returns 0
 */
int div(int a, int b)
{
if (b == 0)
{
printf("Error: Division by zero\n");
return (0);
}
return (a / b);
}

/**
 * mod - Computes the modulo of two integers
 *  * @a: Dividend
 *   * @b: Divisor
 *Return: It returns the remainder when a is divided by b
 *If b is 0, prints an error message and returns 0
 */
int mod(int a, int b)
{
if (b == 0)
{
printf("Error: Modulo by zero\n");
return (0);
}
return (a % b);
}
