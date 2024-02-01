#include "hash_tables.h"

/**
 *  * key_index - Gets the index of a key in the hash table array.
 *   * @key: The key string.
 *    * @size: The size of the array in the hash table.
 *     *
 *      * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value;

if (key == NULL || size == 0)
return (0);

/* Calculate hash value using hash_djb2 function */
hash_value = hash_djb2(key);

/* Use modulo to ensure the index is within the array size */
return (hash_value % size);
}
