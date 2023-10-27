#include "main.h"
/**
 *  * _strcpy - Copy a string to another string
 *   * @dest: The destination string
 *    * @src: The source string to be copied
 *     *
 *      * Return: The pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
char *copy = dest;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (copy);
}
