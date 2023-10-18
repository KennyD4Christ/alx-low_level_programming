#include "main.h"

/**
 * _strncat - Concatenates two strings with a maximum length.
 * @dest: The destination string where src will be concatenated.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest; /* Save the original pointer to the destination string */

	/* Move dest to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Append at most 'n' bytes from src to dest */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* Add a null terminator to the concatenated string */
	*dest = '\0';

	return (result); /* Return a pointer to the resulting string (dest) */
}
