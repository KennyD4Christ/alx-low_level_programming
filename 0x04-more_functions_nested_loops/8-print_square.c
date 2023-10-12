#include "main.h"

/**
 * print_square - prints a square of '#' characters followed by a new line
 * @size: The size of the square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int row, col;

		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
