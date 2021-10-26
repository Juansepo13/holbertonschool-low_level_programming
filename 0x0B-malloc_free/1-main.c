#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check
 *
 * Return: 0.
 */
int main(void)
{
	char *s;

	s = _strdup("Duplicated");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
