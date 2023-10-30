#include "main.h"
#include <stdlib.h>

/**
 *  * _strdup - Duplicates a string using dynamic memory allocation
 *   * @str: The string to duplicate
 *    *
 *     * Return: A pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0, i;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
{
length++;
}
duplicate = (char *)malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= length; i++)
{
duplicate[i] = str[i];
}
return (duplicate);
}
