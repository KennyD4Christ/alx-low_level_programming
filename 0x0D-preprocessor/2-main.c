#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: Prints the name of the source file
 *     *
 *      * Return: Always 0 (Success)
 */
int main(void)
{
printf("This program was compiled from the file: %s\n", __FILE__);
return (0);
}
