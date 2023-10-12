#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Find the largest prime factor of a number.
 * @n: The number for which to find the largest prime factor.
 *
 * Return: The largest prime factor of the number.
 */
long largest_prime_factor(long n);

/**
 * main - Entry point of the program.
 *
 * Return: (0) Always returns 0 to indicate success.
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime = largest_prime_factor(number);

	printf("%ld\n", largest_prime);

	return (0);
}

/**
 * largest_prime_factor - Find the largest prime factor of a number.
 * @n: The number for which to find the largest prime factor.
 *
 * Return: The largest prime factor of the number.
 */
long largest_prime_factor(long n)
{
	long largest = -1;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (long i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		largest = n;
	}

	return (largest);
}
