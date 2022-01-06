#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to dlistint_t linked list.
 * @index: Index of the node, starting from 0.
 *
 *Return: The nth node. NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; head && index; head = head->next, index--)
		;
	if (head && !index)
		return (head);
	return (NULL);
}
