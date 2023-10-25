#include "main.h"
/**
 * wildcmp - Compare two strings with wildcard '*'
 * @s1: The first string
 * @s2: The second string with wildcard '*'
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);  /* If both strings are empty, they are identical */
if (*s2 == '*')
{
if (*s1 == '\0')
return (wildcmp(s1, s2 + 1));  /* Skip '*' in s2 */
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
if (*s1 != *s2)
return (0);  /* If characters don't match, they are not identical */
return (wildcmp(s1 + 1, s2 + 1));
}
