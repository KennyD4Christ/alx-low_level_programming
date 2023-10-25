#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The number for which to calculate the factorial
 *
 * Return: The factorial of n, or -1 in case of an error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);  /* Error case: n is less than 0 */
	}
	if (n == 0)
	{
		return (1);   /* Base case: factorial of 0 is 1 */
	}
	return (n * factorial(n - 1));  /* Recursive case */
}
