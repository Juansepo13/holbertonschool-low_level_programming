#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: seconmd string
 * Return: pointer to coned string
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int l1 = 0, l2 = 0, i, c = 0;

	if (s1 != NULL)
	{
		while (s1[l1] != 0)
			l1++;
	}
	if (s2 != NULL)
	{
		while (s2[l2] != 0)
			l2++;
	}
	con = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!con)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		con[c] = s1[i];
		c++;
	}
	for (i = 0; i < l2; i++)
	{
		con[c] = s2[i];
		c++;
	}
	con[c] = '\0';
	return (con);
}
