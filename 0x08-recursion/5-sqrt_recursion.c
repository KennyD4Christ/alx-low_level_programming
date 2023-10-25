#include "main.h"

/**
 * find_sqrt - Helper function to find the natural square root.
 * @n: The number for which to find the square root
 * @guess: The current guess for the square root
 *
 * Return: The natural square root or -1 if not found.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);  /* Natural square root found */
	}
	if (guess * guess > n)
	{
		return (-1);  /* Square root does not exist */
	}
	return (find_sqrt(n, guess + 1));  /* Increment the guess */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root
 *
 * Return: The natural square root or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);  /* Error case: n is negative */
	}
	if (n == 0 || n == 1)
	{
		return (n);  /* Base case: square root of 0 or 1 is itself */
	}
	return (find_sqrt(n, 2));  /* Start the search with a guess of 2 */
}
