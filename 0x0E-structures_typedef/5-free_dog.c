#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *  * free_dog - Frees memory allocated for a dog
 *   * @d: Pointer to the dog to be freed
 *    *
 *     * Description: This function frees the memory
 *     allocated for a dog, including
 *      * the name and owner strings. It is designed
 *      to work with the dog_t structure.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);   /* Free the name string */
free(d->owner);  /* Free the owner string */
free(d);         /* Free the dog structure */
}
}
