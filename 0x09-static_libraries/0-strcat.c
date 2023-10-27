#include "main.h"
/**
 *  * _strcat - Concatenate two strings
 *   * @dest: The destination string
 *    * @src: The source string to be concatenated
 *      * Return: The pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
char *original_dest = dest;
while (*dest)
dest++;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (original_dest);
}
