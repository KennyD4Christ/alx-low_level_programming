#include "main.h"

/**
 * _strncpy - Copies a string with a specified maximum length.
 * @dest: The destination string where src will be copied.
 * @src: The source string to be copied to dest.
 * @n: The maximum number of bytes to copy from src.
 *
 * This function copies at most 'n' bytes from the 'src' string to the 'dest'
 * string. If 'src' is shorter than 'n', it pads the destination string with
 * null bytes to reach 'n' bytes in length. If 'src' is longer than 'n', the
 * copy is limited to the first 'n' bytes of 'src'. The resulting copied string
 * is stored in 'dest'.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
