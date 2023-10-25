#include "main.h"
/**
 * is_prime_recursive - Helper function to check if an integer is prime
 * @n: The integer to be checked
 * @i: The current divisor to check
 *
 * Return: (1) if n is prime, (0) otherwise
 */
int is_prime_recursive(int n, int i)
{
if (i <= 1)
{
return (1);  /* 0 and 1 are not prime numbers */
}
if (n % i == 0)
{
return (0);  /* If n is divisible by i, it's not prime */
}
return (is_prime_recursive(n, i - 1));
}

/**
 * is_prime_number - Check if an integer is a prime number
 * @n: The integer to be checked
 *
 * Return: (1) if n is prime, (0) otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);  /* 0 and 1 are not prime numbers */
}
if (n == 2)
{
return (1);  /* 2 is a prime number */
}
if (n % 2 == 0)
{
return (0);  /* Any even number greater than 2 is not prime */
}
return (is_prime_recursive(n, n / 2 - 1));
}
