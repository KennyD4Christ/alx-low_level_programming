#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - Entry point of the calculator program
 *   * @argc: The number of command-line arguments
 *    * @argv: An array containing the command-line arguments
 *     * Return: 0 on success, or exit status in case of an error
 */

int main(int argc, char *argv[])
{
int num1, num2, result;
char *operator;
int (*operation)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];
operation = get_op_func(operator);
if (operation == NULL)
{
printf("Error\n");
exit(99);
}
result = operation(num1, num2);
printf("%d\n", result);
return (0);
}
