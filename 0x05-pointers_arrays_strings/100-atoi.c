#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value extracted from the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* Initialize sign as positive */
	int i = 0;

	/* Check for and handle leading '+' or '-' */
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign *= -1; /* Change sign to negative */
		}
		i++;
	}

	/* Convert the numeric part of the string to an integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for integer overflow */
		int digit = s[i] - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			/* Handle integer overflow by returning the appropriate value */
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}

		result = result * 10 + digit;
		i++;
	}

	return (result * sign);
}
