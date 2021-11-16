#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to a list
 * node: Variable
 *
 * Return: Nothing void.
 */

void free_listint(listint_t *head)
{
	listint_t *node;
	listint_t *release;

	node = head;

	while (node != NULL)
	{
		release = node->next;
		free(node);
		node = release;
	}
}
