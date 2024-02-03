#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *  * shash_table_create - Creates a sorted hash table.
 *   * @size: The size of the array.
 *    *
 *     * Return: A pointer to the newly created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht = NULL;
unsigned long int i;

ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
return (NULL);
ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}

for (i = 0; i < size; i++)
ht->array[i] = NULL;

ht->shead = NULL;
ht->stail = NULL;
return (ht);
}

/**
 *  * shash_table_set - Inserts a key/value pair into the sorted hash table.
 *   * @ht: The sorted hash table.
 *    * @key: The key string.
 *     * @value: The value associated with the key.
 *      *
 *       * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *new_node, *current;
if (!ht || !key || !value)
return (0);
new_node = malloc(sizeof(shash_node_t));
if (!new_node)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
if (!new_node->key || !new_node->value)
{
free(new_node->key);
free(new_node->value);
free(new_node);
return (0);
}
current = ht->shead;
new_node->snext = new_node->sprev = NULL;
while (current && strcmp(key, current->key) < 0)
current = current->snext;
if (current)
{
new_node->sprev = current->sprev;
new_node->snext = current;
if (current->sprev)
current->sprev->snext = new_node;
else
ht->shead = new_node;
current->sprev = new_node;
}
else
{
if (ht->stail)
ht->stail->snext = new_node;
else
ht->shead = new_node;
new_node->sprev = ht->stail;
ht->stail = new_node;
}
return (1);
}

/**
 *  * shash_table_get - Retrieves a value associated with a key.
 *   * @ht: The sorted hash table.
 *    * @key: The key to look for.
 *     *
 *Return: The value associated with the key, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *current;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
index = key_index((unsigned char *)key, ht->size);
current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
return (current->value);
current = current->next;
}
return (NULL);
}

/**
 *  * shash_table_print - Prints a sorted hash table.
 *   * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *current;

if (ht == NULL)
return;

printf("{");
for (current = ht->shead; current != NULL; current = current->snext)
{
printf("'%s': '%s'", current->key, current->value);
if (current->snext != NULL)
printf(", ");
}
printf("}\n");
}

/**
 *  * shash_table_print_rev - Prints a sorted hash table in reverse order.
 *   * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *current;

if (ht == NULL)
return;

printf("{");
for (current = ht->stail; current != NULL; current = current->sprev)
{
printf("'%s': '%s'", current->key, current->value);
if (current->sprev != NULL)
printf(", ");
}
printf("}\n");
}

/**
 *  * shash_table_delete - Deletes a sorted hash table.
 *   * @ht: The sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *current, *temp;

if (ht == NULL)
return;

current = ht->shead;
while (current != NULL)
{
temp = current->snext;
free(current->key);
free(current->value);
free(current);
current = temp;
}

free(ht->array);
free(ht);
}
