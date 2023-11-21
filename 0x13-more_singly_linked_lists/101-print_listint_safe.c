#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * print_listint_safe - prints a listint_t linked list safely
 *   * @head: pointer to the head of the list
 *    * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast, *loop_start;
size_t count = 0;
slow = head;
fast = head;
loop_start = NULL;
while (slow != NULL && fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next->next;
count++;
/* Check for a loop */
if (slow == fast)
{
loop_start = slow;
break;
}
}
if (loop_start != NULL)
{
slow = head;
while (slow != fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next;
}
printf("-> [%p] %d\n", (void *)slow, slow->n);
printf("Linked list has a loop\n");
exit(98);
}
return (count);
}
