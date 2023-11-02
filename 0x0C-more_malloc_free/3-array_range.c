#include <stdlib.h>

/**
 *  * array_range - Creates an array of integers from min to max.
 *   * @min: The minimum value.
 *    * @max: The maximum value.
 *     *
 *      * Return: A pointer to the newly created array.
 *       *         If min > max or if malloc fails, it returns NULL.
 */
int *array_range(int min, int max)
{
int *arr;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(size *sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}
