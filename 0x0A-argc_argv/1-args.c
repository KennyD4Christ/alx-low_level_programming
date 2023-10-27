#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Description: Prints the number of arguments passed into the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* This line is to suppress the unused variable warning */
	printf("%d\n", argc - 1);
	return (0);
}
