#include "main.h"
#include <stdlib.h>

/**
 *  * argstostr - Concatenates all the arguments of the program
 *   * @ac: The number of arguments
 *    * @av: An array of argument strings
 *      * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *concatenated;
int i, j, k, total_len = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_len++;
total_len++;
}
concatenated = (char *)malloc(total_len + 1 * sizeof(char));
if (concatenated == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated[k] = av[i][j];
k++;
}
concatenated[k] = '\n';
k++;
}
concatenated[k] = '\0';
return (concatenated);
}
