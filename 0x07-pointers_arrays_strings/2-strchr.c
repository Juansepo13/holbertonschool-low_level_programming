#include "main.h"
#include <stdio.h>

/**
 * _strchr - Funtion that locates char in one string
 * @s: string that is passes in
 * @c: char that you are searching s for
 * Return: is a char c found in one string, or null.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
