#include "lists.h"

/**
 *listint_len - Gives the number of elements in a linked list.
 *@h: Head node.
 *
 *Return: Number elements in a Linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nmbr = 0;

	while (h != NULL)
	{
		nmbr++;
		h = h->next;
	}
	return (nmbr);
}
