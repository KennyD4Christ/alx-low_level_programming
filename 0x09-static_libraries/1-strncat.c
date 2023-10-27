#include "main.h"
/**
 *  * _strncat - Concatenate n characters from one string to another
 *   * @dest: The destination string
 *    * @src: The source string to be concatenated
 *     * @n: The maximum number of characters to concatenate
 *      *
 *       * Return: The pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
char *original_dest = dest;
while (*dest)
dest++;
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (original_dest);
}
