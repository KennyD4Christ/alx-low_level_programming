#include "lists.h"
#include <stdlib.h>

/**
 *  * add_nodeint - adds a new node at the beginning of a listint_t list
 *   * @head: pointer to the pointer to the head of the linked list
 *    * @n: integer value for the new node
 *     *
 *      * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
/* Initialize the new node */
new_node->n = n;
new_node->next = *head;
/* Update the head to point to the new node */
*head = new_node;
return (new_node);
}
