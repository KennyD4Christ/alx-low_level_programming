#include "lists.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *  * print_listint_safe - prints a listint_t linked list safely
 *   * @head: pointer to the head of the linked list
 *    *
 *     * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
size_t node_count = 0;
while (current != NULL)
{
/* Use printf to print to standard output */
printf("[%p] %d\n", (void *)current, current->n);
node_count++;
/* Check for a loop by comparing addresses */
if (current >= current->next)
{
/* Use write to print to standard error */
write(2, "Linked list has a loop\n", 24);
exit(98);
}
current = current->next;
}
return (node_count);
}
