#include "main.h"
/**
 *  * _strncpy - Copy n characters from one string to another
 *   * @dest: The destination string
 *    * @src: The source string to be copied
 *     * @n: The number of characters to copy
 *       * Return: The pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
char *original_dest = dest;
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (original_dest);
}
