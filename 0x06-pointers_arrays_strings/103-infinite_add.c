#include "main.h"
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0;
	int max_len = size_r - 1;  /* Leave one character for the null-terminator */
	int sum, i, j;
	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;
	if (len1 > max_len || len2 > max_len)
		return (0);
	i = len1 - 1;
	j = len2 - 1;
	int k = 0;  /* Index for the result */
	while (i >= 0 || j >= 0 || carry)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		if (k < max_len)
		{
			r[k] = (sum % 10) + '0';
			k++;
		}
		else
		{
			return (0);
		}
		if (i >= 0) i--;
		if (j >= 0) j--;
	}
	r[k] = '\0';
	int start = 0;
	int end = k - 1;
	while (start < end)
	{
		char temp = r[start];
		r[start] = r[end];
		r[end] = temp;
		start++;
		end--;
	}
	return (r);
}
