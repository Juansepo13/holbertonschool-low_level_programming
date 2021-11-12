#include "lists.h"
/**
 *add_node - Adds a new node at the beginning.
 *@head: Head of a list.
 *@str: String to range.
 *Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *mylist;
	int a;

	mylist = malloc(sizeof(list_t));
	if (mylist == NULL)
		return (NULL);
	mylist->str = strdup(str);
	a = 0;
	while (str[a] != '\0')
		a++;
	mylist->len = a;
	mylist->next = *head;
	*head = mylist;
	return (mylist);
}
