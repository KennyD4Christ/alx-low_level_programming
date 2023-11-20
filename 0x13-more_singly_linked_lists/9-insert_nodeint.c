#include "lists.h"
#include <stdlib.h>

/**
 *  * insert_nodeint_at_index - inserts a new node at a given position
 *   * @head: pointer to the pointer to the head of the linked list
 *    * @idx: index of the list where the new node should be added
 *     * @n: integer value for the new node
 *      *
 *       * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current;
unsigned int i;
/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
/* If inserting at the beginning, update head and return new node */
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
/* Traverse the list to find the node at index (idx-1) */
current = *head;
for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
}
if (current == NULL)
{
free(new_node);
return (NULL);
}
/* Insert the new node into the list */
new_node->next = current->next;
current->next = new_node;
return (new_node);
}