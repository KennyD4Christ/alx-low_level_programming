#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The square matrix of integers.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int index;
for (index = 0; index < size; index++)
{
sum1 += a[index];
a += size;
}
for (index = 0; index < size; index++)
{
sum2 += a[index];
a -= size;
}
printf("%d, %d\n", sum1, sum2);
}
