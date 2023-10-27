#include <stdio.h>

/**
 *  * main - Entry point
 *   * @argc: The number of command-line arguments
 *    * @argv: An array containing the command-line arguments
 *     *
 *      * Description: This program prints its name, followed by a new line.
 *       * If you rename the program, it will print the new name
 *       *without recompilation.
 *        * It does not remove the path before the name of the program.
 *         *
 *          * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
