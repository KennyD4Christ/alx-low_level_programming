#include <stdio.h>
#include <string.h>
/**
 * addBigNumbers - Add two big integer strings
 * @a: The first big integer string
 * @b: The second big integer string
 * @result: The result of the addition
 */
void addBigNumbers(char *a, char *b, char *result)
/**
 * main - Entry point of the program
 *
 * This program calculates and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by a comma and a space, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
{
int carry = 0;
int lenA = strlen(a);
int lenB = strlen(b);
int maxLength = (lenA > lenB) ? lenA : lenB;
int i, j, k;
for (i = lenA - 1, j = lenB - 1, k = maxLength - 1; k >= 0; i--, j--, k--)
{
int numA = (i >= 0) ? (a[i] - '0') : 0;
int numB = (j >= 0) ? (b[j] - '0') : 0;
int sum = numA + numB + carry;
result[k] = (sum % 10) + '0';
carry = sum / 10;
}
if (carry > 0)
{
for (i = maxLength; i > 0; i--)
{
result[i] = result[i - 1];
}
result[0] = carry + '0';
maxLength++;
}
result[maxLength] = '\0';
}
int main(void)
{
char fib1[300] = "1";
char fib2[300] = "2";
char nextFib[300];
char separator[] = ", ";
int count;
printf("%s", fib1);
for (count = 1; count < 98; count++)
{
printf("%s", separator);
addBigNumbers(fib1, fib2, nextFib);
printf("%s", nextFib);
strcpy(fib1, fib2);
strcpy(fib2, nextFib);
}
printf("\n");
return (0);
}
