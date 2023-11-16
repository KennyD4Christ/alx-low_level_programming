#include "lists.h"
#include <stdio.h>

/**
 *  * startup - prints a message before the main function is executed
 */
void startup(void) __attribute__((constructor));

/**
 *  * startup - prints a message before the main function is executed
 */
void startup(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
