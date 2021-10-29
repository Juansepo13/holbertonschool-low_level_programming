#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - function that concatenates 2 strings
 * @s1: string1
 * @s2: string2
 * @n: bytes to s2 copied
 *
 * Return: Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *fifi = NULL;
	unsigned int i, c, d;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	for (c = 0; s1[c] != '\0'; c++)
	{
	}
	for (d = 0; s2[d] != '\0'; d++)
	{
	}
	if (n >= d)
	{
		n = d;
	}
	fifi = malloc((c + n + 1) * sizeof(char));

	if (fifi == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		fifi[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		fifi[c + i] = s2[i];
	}
	fifi[c + n] = '\0';
	return (fifi);
}
