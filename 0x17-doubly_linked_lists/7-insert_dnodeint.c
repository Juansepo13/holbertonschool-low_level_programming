#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a dlink list
 * @idx: Index of the list where the new node should be added.
 * @n: Value.
 * Return: The address of the new node. NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *NwNd = NULL, *Ptr = NULL;

	if (!idx)
		return (add_dnodeint(h, n));
	if (!h)
		return (NULL);
	for (Ptr = *h; idx > 1 && Ptr && Ptr->next; idx--, Ptr = Ptr->next)
		;
	if (idx > 1 || !Ptr)
		return (NULL);
	NwNd = malloc(sizeof(dlistint_t));
	if (!NwNd)
		return (NULL);
	NwNd->n = n;
	NwNd->prev = Ptr;
	NwNd->next = Ptr->next;
	if (Ptr->next)
		Ptr->next->prev = NwNd;
	Ptr->next = NwNd;
	return (NwNd);
}
