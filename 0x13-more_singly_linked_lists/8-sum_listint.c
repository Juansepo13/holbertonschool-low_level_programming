#include "lists.h"

/**
 *sum_listint - Sum all data "n" in linked list
 *@head: Head node.
 *
 *Return: The sum of all data in linstint_t if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL) /*if head exist */
	{
		sum += head->n; /* suma de los datos */
		head = head->next;
	}
	return (sum);
}
