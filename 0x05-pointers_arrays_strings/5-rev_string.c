#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: Pointer to a string
 *
 * Description: This function reverses the input string in place.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
