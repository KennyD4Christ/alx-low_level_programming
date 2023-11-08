#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - Entry point of the program
 *   * @argc: The number of command-line arguments
 *    * @argv: An array containing the command-line arguments
 *     * Return: 0 on success, or exit status in case of an error
 */
int main(int argc, char *argv[])
{
int num_bytes;
unsigned char *main_opcodes;
int i;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}
main_opcodes = (unsigned char *)main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", main_opcodes[i]);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");
return (0);
}
