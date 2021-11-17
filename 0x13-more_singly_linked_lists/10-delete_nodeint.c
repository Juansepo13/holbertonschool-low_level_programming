#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 * @head: Head of node.
 * @index: Index of list.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ndtdlt, /*Node to delete*/ *ndx;/*Index to delete*/
	unsigned int cntr = 0; /*Counter of index*/

	if (head == NULL || *head == NULL)
		return (-1); /*If is NULL*/

	ndtdlt = *head;

	if (index == 0) /*Deleting node*/
	{
		*head = ndtdlt->next;
		free(ndtdlt);
		return (1);
	}

	while (cntr < index - 1)
	{
		if (ndtdlt->next == NULL) /*If deleting fails*/
			return (-1);

		ndtdlt = ndtdlt->next;
		cntr++;
	}

	ndx = ndtdlt->next;
	ndtdlt->next = ndx->next;
	free(ndx);

	return (1);
}
