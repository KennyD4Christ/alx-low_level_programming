#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix
 * @a: The square matrix represented as an array
 * @size: The size of the square matrix
 */
void print_diagsums(int *a, int size)
{
int main_diag_sum = 0;
int secondary_diag_sum = 0;
for (int i = 0; i < size; i++)
{
main_diag_sum += a[i * size + i];
secondary_diag_sum += a[i * size + (size - 1 - i)];
}
printf("Sum of main diagonal: %d\n", main_diag_sum);
printf("Sum of secondary diagonal: %d\n", secondary_diag_sum);
}
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int size = 3;
int matrix[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
print_diagsums(matrix, size);
return (0);
}
