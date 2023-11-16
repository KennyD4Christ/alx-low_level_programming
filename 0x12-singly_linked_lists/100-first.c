#include <stdio.h>

/**
 *  * pre_main_message - Prints a message before the main function is executed.
 */
void pre_main_message(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
/**
 *  * main - Entry point of the program
 *   *
 *    * This function is the entry point of the program. It prints a message
 *     * before executing the rest of the main code.
 *      *
 *       * Return: Always 0 (Success)
 */
int main(void)
{
pre_main_message(); /* Call the function before main */
/* Rest of your main function */
return (0);
}
