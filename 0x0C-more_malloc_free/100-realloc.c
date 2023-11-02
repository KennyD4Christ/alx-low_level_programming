#include <stdlib.h>

/**
 *  * _realloc - Reallocate a memory block using malloc and free
 *   * @ptr: Pointer to the memory previously allocated with malloc
 *    * @old_size: Size of the old memory block in bytes
 *     * @new_size: New size of the memory block in bytes
 * Return: (void *) Pointer to the newly allocated memory block,
 * or (NULL) on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
void *new_ptr;
if (new_size == old_size)
return (ptr);
if (!ptr)
{
new_ptr = malloc(new_size);
if (!new_ptr)
return (NULL);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else
{
new_ptr = malloc(new_size);
if (!new_ptr)
return (NULL);
if (old_size > new_size)
old_size = new_size;
for (i = 0; i < old_size; i++)
{
*((char *)new_ptr + i) = *((char *)ptr + i);
}
free(ptr);
}
return (new_ptr);
}
