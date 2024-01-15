#include "main.h"

/**
 *  * _strlen - Computes the length of a string.
 *   * @s: The string.
 *    *
 *     * Return: The length of the string.
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
 *  * _puts - Writes a string to the standard output followed by a newline.
 *   * @s: The string to be written.
 *    *
 *     * Return: Void (no return).
 */
void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}

/**
 *  * _strcpy - Copies a string from source to destination.
 *   * @dest: The destination string.
 *    * @src: The source string.
 *     *
 *      * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
char *temp = dest;
while ((*dest++ = *src++))
;
return (temp);
}

/**
 *  * _atoi - Converts a string to an integer.
 *   * @s: The string to be converted.
 *    *
 *     * Return: The converted integer.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
while (*s == ' ' || (*s >= 9 && *s <= 13))
s++;
if (*s == '-' || *s == '+')
{
if (*s == '-')
sign = -1;
s++;
}
while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
}
return (sign *result);
}

/**
 *  * _strcat - Concatenates two strings.
 *   * @dest: The destination string.
 *    * @src: The source string.
 *     *
 *      * Return: The pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
char *temp = dest;
while (*dest != '\0')
dest++;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (temp);
}
