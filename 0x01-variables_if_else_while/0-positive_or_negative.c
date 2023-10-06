#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * This program generates a random number and determines if it's positive,
 * negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
/* Seed the random number generator */
srand(time(0));
/* Generate a random number between -100 and 100 (inclusive) */
n = rand() % 201 - 100;
/* Print the generated number */
printf("The number %d ", n);
/* Check if the number is positive, zero, or negative */
if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else
printf("is negative\n");
return (0);
}
