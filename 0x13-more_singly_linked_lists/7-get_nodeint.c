#include "lists.h"

/**
 *get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *@head: Head of node.
 *@index: Number of nodes.
 *
 *Return: The nth node of listint_t. NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int szflst = 0; /**Size of list*/

	while (head != NULL) /**While head its not empty*/
	{
		if (szflst == index)
			return (head);
		head = head->next;
		szflst++;
	}
	return (NULL);
}
