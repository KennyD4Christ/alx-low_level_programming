#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base value
 * @y: The exponent value
 *
 * Return: The result of x^y, or -1 in case of an error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);  /* Error case: y is less than 0 */
	}
	if (y == 0)
	{
		return (1);   /* Base case: any number raised to the power of 0 is 1 */
	}
	return (x * _pow_recursion(x, y - 1));  /* Recursive case */
}
