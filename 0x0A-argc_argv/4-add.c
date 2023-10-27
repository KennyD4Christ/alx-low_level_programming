#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - Entry point
 *   * @argc: The number of arguments
 *    * @argv: An array of arguments
 *     *
 *      * Description: Adds positive numbers and prints the result.
 *       *
 *        * Return: (0) for success, (1) for error
 */
int main(int argc, char *argv[])
{
int i;
int j;
int sum = 0;
if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
