#include "function_pointers.h"

/**
 *  * array_iterator - Executes a function on each element of an array.
 *   * @array: The array to operate on.
 *    * @size: The size of the array.
 *     * @action: A function pointer to the action function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}