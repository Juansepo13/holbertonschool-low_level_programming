#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        char *s;
	int len1, i, k;
	unsigned int j, len2;

	k = 0;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(*s) * 1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(*s) * 1);
		*s2 = '\0';
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;

	s = malloc(sizeof(char) + 1 * (len1 + n));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = i; j < (len1 + n); j++)
	{
		s[j] = s2[k];
		k++;
	}
	s[j] = '\0';
	return (s);
}
