#include "dog.h"
#include <stdlib.h>

/**
 *  * init_dog - Initializes a struct dog
 *   * @d: Pointer to the struct dog
 *    * @name: Name of the dog
 *     * @age: Age of the dog
 *      * @owner: Owner of the dog
 * Description: This function initializes a struct dog with the provided
 * name, age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
