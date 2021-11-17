#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Head of node.
 * @index: Index of list.
 * @n: Siz of the list
 *
 * Return: The address new node, NULL if return failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int a;
	listint_t *szflst,/*Size of list*/ *nwnd;/*New node.*/

	if (*head == NULL && index != 0)/*If fails. NULL.*/
		return (NULL);/*If its not possible add node at index. NULL.*/
	szflst = *head;
	nwnd = malloc(sizeof(listint_t));
	if (nwnd == NULL)
		return (NULL);
	nwnd->n = n;
	if (index == 0)
	{
		nwnd->next = *head;
		*head = nwnd;
		return (nwnd);
	}
	szflst = *head;
	a = 0;
	while (a < index - 1)
	{
		szflst = szflst->next;
		if (szflst == NULL)
		{
			free(nwnd);
			return (NULL);
		}
		a++;
	}
	nwnd->next = szflst->next;
	szflst->next = nwnd;
	return (nwnd);
}
