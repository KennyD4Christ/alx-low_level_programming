#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check for primality
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;
	if (n <= 1)
	{
		return (0);  /* Numbers less than or equal to 1 are not prime */
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);  /* n is divisible by i, so it's not prime */
		}
	}

	return (1);  /* n is prime */
}
