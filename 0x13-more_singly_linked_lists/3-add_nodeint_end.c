#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of listint_t.
 *@head: Head of nodes.
 *@n: Elements to add.
 *
 *Return: The address for a new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nwnd, *lstnd; /* new node */

	nwnd = malloc(sizeof(listint_t));
	if (nwnd == NULL)
		return (NULL);
	nwnd->n = n;
	if (*head == NULL)
	{
		*head = nwnd;
		return (nwnd);
	}
	else
	{
		lstnd = *head;
		while (lstnd->next != NULL)
			lstnd = lstnd->next;
		lstnd->next = nwnd;
		nwnd->next = NULL;
		return (nwnd);
	}
}
