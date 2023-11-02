#include <stdlib.h>  /* For malloc and exit */

/**
 *  * malloc_checked - Allocates memory using malloc
 *   * @b: The number of bytes to allocate
 *    *
 *     * Return: A pointer to the allocated memory
 *      If malloc fails, it terminates the program with status 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);  /* Terminate the program with a status value of 98 */
}
return (ptr);
}
