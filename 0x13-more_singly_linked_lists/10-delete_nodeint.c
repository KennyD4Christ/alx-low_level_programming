#include "lists.h"
#include <stdlib.h>

/**
 *  * delete_nodeint_at_index - deletes the
 *  node at index index of a listint_t linked list
 *   * @head: pointer to the pointer to the head of the linked list
 *    * @index: index of the node that should be deleted
 *     *
 *      * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int i;
if (*head == NULL)
return (-1);
/* If deleting the head node */
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
current = *head;
/* Traverse to the node before the one to be deleted */
for (i = 0; i < index - 1 && current != NULL; i++)
{
current = current->next;
}
/* Check if index is out of bounds */
if (current == NULL || current->next == NULL)
return (-1);
/* Delete the node at the specified index */
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}
