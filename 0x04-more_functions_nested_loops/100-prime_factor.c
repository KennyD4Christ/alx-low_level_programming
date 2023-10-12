#include <stdio.h>
#include <math.h>
/**
 * largest_prime_factor - Find the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long n)
{
long largestFactor = -1;
while (n % 2 == 0)
{
largestFactor = 2;
n /= 2;
}
for (long i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
largestFactor = i;
n /= i;
}
}
if (n > 2)
largestFactor = n;
return (largestFactor);
}
int main(void)
{
long number = 612852475143;
long largestFactor = largest_prime_factor(number);
printf("%ld\n", largestFactor);
return (0);
}
