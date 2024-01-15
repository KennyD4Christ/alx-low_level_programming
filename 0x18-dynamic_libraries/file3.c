#include "main.h"

/**
 *  * _strncat - Concatenates n characters from one string to another.
 *   * @dest: The destination string.
 *    * @src: The source string.
 *     * @n: The number of characters to concatenate.
 *      *
 *       * Return: The pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *temp = dest;
while (*dest != '\0')
dest++;
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (temp);
}

/**
 *  * _strncpy - Copies up to n characters from source to destination.
 *   * @dest: The destination string.
 *    * @src: The source string.
 *     * @n: The number of characters to copy.
 *      *
 *       * Return: The pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *temp = dest;
while (*src != '\0' && n > 0)
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
return (temp);
}

/**
 *  * _strcmp - Compares two strings.
 *   * @s1: The first string.
 *    * @s2: The second string.
 *     *
 * Return: 0 if the strings are equal, an integer
 * less than 0 if s1 is less than s2,
 * and an integer greater than 0 if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 *  * _memset - Fills the first n bytes of a memory area with a constant byte.
 *   * @s: The memory area.
 *    * @b: The constant byte.
 *     * @n: The number of bytes to fill.
 *      *
 *       * Return: The pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n > 0)
{
*s = b;
s++;
n--;
}
return (s);
}

/**
 *  * _memcpy - Copies n bytes from source memory to destination memory.
 *   * @dest: The destination memory.
 *    * @src: The source memory.
 *     * @n: The number of bytes to copy.
 *      *
 *       * Return: The pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *temp = dest;
while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
return (temp);
}
