#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing acceptable characters
 *
 * Return: Pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *current_accept = accept;

		while (*current_accept)
		{
			if (*s == *current_accept)
				return (s);
			current_accept++;
		}
		s++;
	}
	return (NULL);
}
