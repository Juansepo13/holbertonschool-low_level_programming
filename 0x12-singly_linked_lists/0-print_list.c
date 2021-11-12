#include "lists.h"
/**
 *print_list - Prints all the elements.
 *@h: Pointer to the first items.
 *Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	int a;

	a = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
