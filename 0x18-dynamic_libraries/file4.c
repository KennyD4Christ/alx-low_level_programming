#include "main.h"
#include <stddef.h>

/**
 *  * _strchr - Locates the first occurrence of a character in a string.
 *   * @s: The string.
 *    * @c: The character to be located.
 *     *
 *Return: The pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (NULL);
}

/**
 *  * _strspn - Calculates the length of the initial segment of a string
 *   *           consisting of only characters from another string.
 *    * @s: The string.
 *     * @accept: The characters to be accepted.
 *      *
 *       * Return: The length of the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s && _strchr(accept, *s))
{
count++;
s++;
}
return (count);
}

/**
 *  * _strpbrk - Searches a string for any of a set of bytes.
 *   * @s: The string.
 *    * @accept: The set of bytes to search for.
 *     *
 * Return: The pointer to the first occurrence in s of any character in
 * accept, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
if (_strchr(accept, *s))
return (s);
s++;
}
return (NULL);
}

/**
 *  * _strstr - Locates the first occurrence of a substring in another string.
 *   * @haystack: The string to search in.
 *    * @needle: The substring to search for.
 *     *
 * Return: The pointer to the first occurrence of needle in haystack,
 * or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *start = haystack;
char *needle_ptr = needle;
while (*needle_ptr && *haystack == *needle_ptr)
{
haystack++;
needle_ptr++;
}
if (*needle_ptr == '\0')
{
return (start);
}
haystack = start + 1;
}
return (NULL);
}
