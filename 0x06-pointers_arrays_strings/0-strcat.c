#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string where src will be concatenated.
 * @src: The source string to be appended to dest.
 *
 * This function appends the `src` string to the `dest` string, overwriting
 * the terminating null byte ('\0') at the end of `dest`, and then adds a
 * new terminating null byte. The resulting concatenated string is stored in
 * `dest`.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
char *result = dest; /* Save the original pointer to the destination string */
/* Move dest to the end of the string */
while (*dest != '\0')
dest++;
/* Copy the src string to the end of dest */
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
/* Add a null terminator to the concatenated string */
*dest = '\0';
return (result); /* Return a pointer to the resulting string (dest) */
}
