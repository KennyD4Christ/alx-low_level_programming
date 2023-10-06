#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * This is the main function that generates a random number,
 * checks if it's positive, zero, or negative, and prints the result.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("The number %d is ", n);
if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}
return (0);
}
