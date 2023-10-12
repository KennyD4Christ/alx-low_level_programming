#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: The number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int spaces = 0;

		while (n > 0)
		{
			int i;

			for (i = 0; i < spaces; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');

			spaces++;
			n--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
