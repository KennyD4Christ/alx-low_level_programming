#include "main.h"
#include <stdlib.h>

/**
 *  * count_words - Counts the number of words in a string
 *   * @str: The input string
 *     * Return: The number of words in the string
 */
int count_words(char *str)
{
int count = 0;
int is_word = 0;
while (*str)
{
if (*str == ' ')
is_word = 0;
else if (!is_word)
{
is_word = 1;
count++;
}
str++;
}
return (count);
}
/**
 *  * strtow - Splits a string into words
 *   * @str: The string to split
 *     * Return: A pointer to an array of strings or NULL if it fails
 */
char **strtow(char *str)
{
char **words;
int i, j, word_count = 0;
if (str == NULL || str[0] == '\0')
return (NULL);
word_count = count_words(str);
words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (i = 0; i < word_count; i++)
{
while (*str == ' ' && *str)
str++;
for (j = 0; str[j] != ' ' && str[j]; j++)
continue;
words[i] = (char *)malloc((j + 1) * sizeof(char));
if (words[i] == NULL)
{
for (; i >= 0; i--)
free(words[i]);
free(words);
return (NULL);
}
for (j = 0; str[j] != ' ' && str[j]; j++)
words[i][j] = str[j];
words[i][j] = '\0';
str += j;
}
words[word_count] = NULL;
return (words);
}
