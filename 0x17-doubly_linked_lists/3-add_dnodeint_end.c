#include "lists.h"
/**
 *add_dnodeint_end - Add a new node at the end of a dlistint_t list.
 *@head: Pointer to the head of a dlistint_t list
 *@n: Value.
 *
 *Return: The address of the new element. NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NwNd = NULL, *Ptr = NULL;

	if (!head)
		return (NULL);
	for (Ptr = *head; Ptr && Ptr->next; Ptr = Ptr->next)
		;
	NwNd = malloc(sizeof(dlistint_t));
	if (!NwNd)
		return (NULL);
	NwNd->n = n;
	NwNd->prev = Ptr;
	NwNd->next = NULL;
	if (!*head)
		*head = NwNd;
	else
		Ptr->next = NwNd;
	return (NwNd);
}
