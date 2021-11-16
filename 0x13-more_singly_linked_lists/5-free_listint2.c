#include "lists.h"

/**
 *free_listint2 - Free a lisint_t list.
 *@head: Head of node
 *
 * Return: void Nothing.
 */

void free_listint2(listint_t **head)
{
	if (head == NULL || (*head) == NULL)
	{
		return;
	}
	if ((*head)->next)
	{
		free_listint2(&((*head)->next));
	}
	free(*head);
	*head = NULL;
}
