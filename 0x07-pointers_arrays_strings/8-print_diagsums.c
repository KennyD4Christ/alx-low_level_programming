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
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("Sum of the main diagonal: %d\n", sum1);
	printf("Sum of the other diagonal: %d\n", sum2);
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int matrix[3][3] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int size = 3;

	print_diagsums((int *)matrix, size);

	return (0);
}
