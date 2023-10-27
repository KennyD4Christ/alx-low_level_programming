#include "main.h"
/**
 *  * _strchr - Locate the first occurrence of a character in a string
 *   * @s: The string to search
 *    * @c: The character to locate
 *      * Return: A pointer to the first occurrence of the
 *      character, or 0 if not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (0);
}
