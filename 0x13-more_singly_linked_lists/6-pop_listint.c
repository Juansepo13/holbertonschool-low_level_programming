#include "lists.h"

/**
 *pop_listint - Deletes head node of listint_t.
 *@head: Node to delete.
 *
 *Return: Head node’s data (n). 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	int nddt; /**Node data*/
	listint_t *ndtdlt = *head; /**Node to delete*/

	if (head == NULL || *head == NULL)
		return (0);

	*head = ndtdlt->next;
	nddt = ndtdlt->n;
	free(ndtdlt);
	return (nddt);
}
