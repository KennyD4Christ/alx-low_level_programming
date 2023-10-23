#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: If c is found - a pointer to the first occurrence
 * or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
