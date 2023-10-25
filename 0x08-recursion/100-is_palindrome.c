#include "main.h"
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: (1) if s is a palindrome, (0) otherwise
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	/* Base case: an empty string is a palindrome */
	if (length == 0)
		return (1);

	return (is_palindrome_recursive(s, 0, length - 1));
}

/**
 * is_palindrome_recursive - Helper function to check
 * if a string is a palindrome
 * @s: The string to be checked
 * @start: The starting index
 * @end: The ending index
 *
 * Return: (1) if s is a palindrome, (0) otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);  /* If we have compared all characters, it's a palindrome */

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
