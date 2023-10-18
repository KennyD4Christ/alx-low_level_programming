#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * This function compares two strings 's1' and 's2' character by character.
 * It returns an integer value less than, equal to, or greater than zero,
 * depending on whether 's1' is less than, equal to, or greater than 's2'.
 *
 * Return: An integer less than, equal to, or greater than zero, indicating
 * the result of the comparison.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
