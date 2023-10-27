#include "main.h"
/**
 *  * _memcpy - Copy n bytes from one memory location to another
 *   * @dest: The destination memory location
 *    * @src: The source memory location to copy from
 *     * @n: The number of bytes to copy
 *      *
 *       * Return: The pointer to the destination memory location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *original_dest = dest;
while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
return (original_dest);
}
