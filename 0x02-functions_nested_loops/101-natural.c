#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This program computes and prints the sum of all the multiples of 3 or 5
 * below 1024.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int sum = 0; /* Initialize the sum variable to store the sum of multiples */
int i;
for (i = 3; i < 1024; i++)
{
/* Check if the number is a multiple of 3 or 5 */
if (i % 3 == 0 || i % 5 == 0)
{
sum += i; /* Add the multiple to the sum */
}
}
/* Print the sum of multiples of 3 or 5 below 1024 */
printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);
return (0);
}
