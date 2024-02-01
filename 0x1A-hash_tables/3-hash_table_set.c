#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 *  * hash_table_set - Adds an element to the hash table.
 *   * @ht: The hash table.
 *    * @key: The key string.
 *     * @value: The value associated with the key.
 *      *
 *       * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *temp;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

index = key_index((unsigned char *)key, ht->size);

/* Check if the key already exists in the list at the index */
temp = ht->array[index];
while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
{
/* Update the value if the key already exists */
free(temp->value);
temp->value = strdup(value);
if (temp->value == NULL)
return (0);
return (1);
}
temp = temp->next;
}

/* If key doesn't exist, create a new node and add it to the list */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}

new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}