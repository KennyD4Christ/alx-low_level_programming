#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to be modified.
 *
 * This function capitalizes the first letter of each word in the string 'str'.
 * Words are separated by space, tabulation, new line, ',', ';', '.', '!', '?',
 * '"', '(', ')', '{', and '}' characters.
 *
 * Return: (A pointer to the modified string 'str').
 */
char *cap_string(char *str)
{
	bool capitalize_next = true;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			capitalize_next = true;
		}
		else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			capitalize_next = false;
		}
		else
		{
			capitalize_next = false;
		}

		i++;
	}

	return (str);
}
