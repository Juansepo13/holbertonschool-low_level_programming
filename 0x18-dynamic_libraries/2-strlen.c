#include "main.h"

/**
 *_strlen - point to swap
 *@s:variable
 *Return: 0
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
