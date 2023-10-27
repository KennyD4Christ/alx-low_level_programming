#include "main.h"
/**
 *  * _memset - Fill a block of memory with a specified value
 *   * @s: The pointer to the memory block
 *    * @b: The value to be set
 *     * @n: The number of bytes to be set to the value
 *      *
 *       * Return: The pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
char *original_s = s;
while (n > 0)
{
*s = b;
s++;
n--;
}
return (original_s);
}
