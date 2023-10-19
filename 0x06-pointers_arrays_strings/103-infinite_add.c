#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: The first number string
 * @n2: The second number string
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: A pointer to the result or 0 if the result can't fit in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0;
	int i, j, k;

	/** Calculate the lengths of the input strings n1 and n2 */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/** Ensure the result can fit in the buffer */
	if (len1 + len2 + 1 > size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int num1 = (i >= 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = num1 + num2 + carry;

		carry = sum / 10;
		r[k] = (sum % 10) + '0';

		if (i >= 0)
			i--;
		if (j >= 0)
			j--;
		k++;
	}

	r[k] = '\0';

	/** Reverse the result string in-place */
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}

	return (r);
}
