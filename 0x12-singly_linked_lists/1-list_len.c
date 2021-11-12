#include "lists.h"
/**
 *list_len - Returns the number of elements in a linked list.
 *@h: Pointer to the first item of the list.
 *Return: Number of elements in list_t.
 */
size_t list_len(const list_t *h)
{
	const list_t *size;
	size_t a;

	size = h;
	for (a = 0; size != NULL; a++)
		size = size->next;
	return (a);
}
