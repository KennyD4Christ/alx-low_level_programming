#include "main.h"

/**
 *  * _islower - Checks if a given character is a lowercase letter.
 *   * @c: The character to be checked.
 *    *
 *     * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}

/**
 *  * _isalpha - Checks if a given character is an alphabetic character.
 *   * @c: The character to be checked.
 *    *
 *     * Return: 1 if c is alphabetic, 0 otherwise.
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 *  * _abs - Computes the absolute value of an integer.
 *   * @n: The integer.
 *    *
 *     * Return: The absolute value of n.
 */

int _abs(int n)
{
return ((n < 0) ? -n : n);
}

/**
 *  * _isupper - Checks if a given character is an uppercase letter.
 *   * @c: The character to be checked.
 *    *
 *     * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}

/**
 *  * _isdigit - Checks if a given character is a digit.
 *   * @c: The character to be checked.
 *    *
 *     * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
