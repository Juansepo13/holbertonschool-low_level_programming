#include "lists.h"
/**
 *dlistint_len - Returns the number of elements in a linked dlistint_t list.
 *@h: Pointer of dlistint_t
 *
 *Return: Nomber of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t Elements = 0;

	for (; h; h = h->next, Elements++);
	return (Elements);
}
