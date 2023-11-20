#include "lists.h"

/**
 *  * find_listint_loop - finds the loop in a linked list
 *   * @head: pointer to the head of the linked list
 *    *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;
if (!head)
return (NULL);
slow = head;
fast = head;
while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow); /* or fast, they both point to the start of the loop */
}
}
return (NULL); /* no loop */
}