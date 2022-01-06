#include "lists.h"
/**
 *print_dlistint - Function to print all the elements of a list_t list
 *@h: Pointer of type lists_t
 *
 *Return: Count
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
