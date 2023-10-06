#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * This program generates a random number, extracts its last digit,
 * and prints whether the last digit is greater than 5, 0, or less than 6
 * and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
/* Seed the random number generator */
srand(time(0));
/* Generate a random number */
n = rand();
/* Get the last digit of the random number */
int last_digit = n % 10;
/* Print the output as specified */
printf("Last digit of %d is %d", n, last_digit);
if (last_digit > 5)
printf(" and is greater than 5\n");
else if (last_digit == 0)
printf(" and is 0\n");
else
printf(" and is less than 6 and not 0\n");
return (0);
}
