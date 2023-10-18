#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is the main function that demonstrates adding a line
 * to print a[2] = 98.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5];
int *p;
p = a;
*(p + 5) = 98; /* The code you provided */
printf("a[2] = %d\n", *(*p + 2)); /* Add this line */
return (0);
}
