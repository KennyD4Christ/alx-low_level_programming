#include <stdio.h>

/**
* main - Entry point, Fizz-Buzz program
*
* Description:
* This program prints numbers from 1 to 100 replace multiples of 3 with Fizz,
 * multiples of 5 with "Buzz," and multiples of both 3 and 5 with "FizzBuzz."
 *
 * Return: 0 (Success)
 */
int main(void)
{
	/* Loop through numbers from 1 to 100 */
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		/* Separate numbers/words with a space */
		if (i < 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
