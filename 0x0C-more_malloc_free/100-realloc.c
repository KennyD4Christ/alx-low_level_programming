#include <stdlib.h>

/**
 *  * _realloc - Reallocates a memory block.
 *   * @ptr: A pointer to the previously allocated memory.
 *    * @old_size: The size of the old memory block in bytes.
 *     * @new_size: The new size of the memory block in bytes.
 *
 * Return: A pointer to the newly reallocated memory block.
 If realloc fails or new_size is zero and ptr is not NULL, it returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int min_size;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
if (new_size == 0)
return (NULL);
else
return (malloc(new_size));
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
min_size = (old_size < new_size) ? old_size : new_size;
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
for (i = 0; i < min_size; i++)
((char *)new_ptr)[i] = ((char *)ptr)[i];
free(ptr);
return (new_ptr);
}
