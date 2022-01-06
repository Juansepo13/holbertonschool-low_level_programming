#include "lists.h"
/**
 *sum_dlistint - Return the sum of the data (n) of a dlistint_t linnked list.
 *@head: pointer to a dlistint_t linked list.
 *
 *Return: Sum of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
