#include "main.h"

/**
 * is_prime_number - Check if an integer is a prime number
 * @n: The integer to be checked
 *
 * Return: (1) if n is prime, (0) otherwise
 */
int is_prime_number(int n)
{
	int i = 5;
	if (n <= 1)
	{
		return (0);  /* 0 and 1 are not prime numbers */
	}
	if (n <= 3)
	{
		return (1);  /* 2 and 3 are prime numbers */
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);  /* Any number divisible by 2 or 3 is not prime */
	}

	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0);  /* If n is divisible by i or i + 2, it's not prime */
		}
		i += 6;  /* Optimized check for prime numbers */
	}

	return (1);  /* If no divisors were found, n is prime */
}
