#include <stdio.h>
/**
 * main - Entry point for the FizzBuzz program
 *
 * Description: This program prints numbers from 1 to 100 according to the
 * FizzBuzz rules. Multiples of 3 are replaced with "Fizz," multiples of 5
 * are replaced with "Buzz," and multiples of both 3 and 5 are replaced with
 * "FizzBuzz." All other numbers are printed as is.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
