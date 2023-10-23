#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The string containing acceptable characters
 *
 * Return: The number of bytes in the initial segment of s
 * that consist of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int match;

	while (*s)
	{
		match = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				length++;
				match = 1;
				break;
			}
			accept++;
		}
		if (match == 0)
			break;
		s++;
		accept -= length;
	}

	return (length);
}
