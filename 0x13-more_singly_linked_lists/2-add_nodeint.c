#include "lists.h"

/**
 *add_nodeint - Adds new node to beginning list.
 *@head: Pointer to a list.
 *@n: Integer for a new node.
 *
 *Return: adrres the new element, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nwnd; /*new node */

	nwnd = malloc(sizeof(listint_t));
	if (nwnd == NULL)
		return (NULL);
	nwnd->n = n;
	nwnd->next = *head;
	*head = nwnd;
	return (nwnd);
}
