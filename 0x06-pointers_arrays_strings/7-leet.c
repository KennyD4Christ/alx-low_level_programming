#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * This function encodes the string 'str' by replacing specific characters
 * with their corresponding "1337" representations.
 *
 * Return: (A pointer to the encoded string).
 */
char *leet(char *str)
{
char leetMap[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char leetReplacements[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == leetMap[j])
{
str[i] = leetReplacements[j];
break;
}
}
}
return (str);
}
