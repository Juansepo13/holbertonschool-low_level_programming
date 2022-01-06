#include "lists.h"
/**
 *free_dlistint - Free a dlistint_t list.
 *@head: Pointer to the dlistint_t list
 *
 *Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *List = head;

	for (; List; List = head)
	{
		head = head->next;
		free(List);
	}
}
