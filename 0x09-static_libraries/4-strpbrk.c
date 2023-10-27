#include "main.h"
/**
 *  * _strpbrk - Locate the first occurrence of any
 *  character from a set in a string
 *   * @s: The string to be searched
 *    * @accept: The set of characters to search for
 *      * Return: A pointer to the first occurrence of a character
 *      from accept, or 0 if not found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (0);
}
