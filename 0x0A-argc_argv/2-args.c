#include <stdio.h>
/**
 *  * main - Entry point
 *   * @argc: The number of arguments
 *    * @argv: An array of arguments
 *     *
 *      * Description: Prints all arguments,
 *      including the first one, one per line.
 *       *
 *        * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
