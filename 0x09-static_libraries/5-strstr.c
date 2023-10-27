#include "main.h"
/**
 *  * _strstr - Locate the first occurrence of a substring in a string
 *   * @haystack: The string to be searched
 *    * @needle: The substring to search for
 *      * Return: A pointer to the first occurrence of the substring,
 *      or 0 if not found
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (0);
}
