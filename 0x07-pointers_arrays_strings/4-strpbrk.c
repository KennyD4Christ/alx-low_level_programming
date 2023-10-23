#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search in.
 * @accept: The string containing bytes to search for.
 *
 * Return: A pointer to the first occurrence in s of a byte from accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *ch = accept;

		while (*ch)
		{
			if (*s == *ch)
				return (s);
			ch++;
		}
		s++;
	}
	return (NULL);
}
