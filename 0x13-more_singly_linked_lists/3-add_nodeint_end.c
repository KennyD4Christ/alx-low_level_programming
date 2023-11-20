#include "lists.h"
#include <stdlib.h>

/**
 *  * add_nodeint_end - adds a new node at the end of a listint_t list
 *   * @head: pointer to the pointer to the head of the linked list
 *    * @n: integer value for the new node
 *     *
 *      * Return: (the address of the new element) or (NULL if it failed)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp;
/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
/* Initialize the new node */
new_node->n = n;
new_node->next = NULL;
/* If the list is empty, make the new node the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
/* Find the last node in the list */
temp = *head;
while (temp->next != NULL)
temp = temp->next;
/* Update the last node to point to the new node */
temp->next = new_node;
return (new_node);
}
