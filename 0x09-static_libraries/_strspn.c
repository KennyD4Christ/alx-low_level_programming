#include "main.h"
/**
 *  * _strspn - Calculate the length of a substring
 *  consisting of characters in a set
 *   * @s: The string to be searched
 *    * @accept: The set of characters to search for
 *     *
 *      * Return: The length of the initial segment of s
 *      consisting of characters in accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 0;
while (*s && !found)
{
int is_in_accept = 0;
char *a = accept;
while (*a)
{
if (*s == *a)
{
count++;
is_in_accept = 1;
break;
}
a++;
}
if (!is_in_accept)
found = 1;
s++;
}
return (count);
}
