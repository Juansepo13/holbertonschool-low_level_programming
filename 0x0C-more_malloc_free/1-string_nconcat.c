#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * string_nconcat - a function that concactenates two strings
 *@s1: String1
 *@s2: String2
 *@n: int
 *
 * Return: Char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int leng1 = 0;
	unsigned int leng2 = 0;
	char *newstring;
	unsigned int size1;
	unsigned int size2;

	if (s1 != NULL)
		for (leng1 = 0; s1[leng1] != '\0'; leng1++)
			;


	if (s2 != NULL)
		for (leng2 = 0; s2[leng2] != '\0'; leng2++)
			;

	if (n >= leng2)
		n = leng2;

	newstring = malloc((leng1 + n + 1) * sizeof(char));
	if (newstring == NULL)
		return (NULL);

	for (size1 = 0, size2 = 0; size2 < leng1; size1++, size2++)
	{
		newstring[size1] = s1[size2];
	}

	for (size2 = 0; size2 < n; size1++, size2++)
	{
		newstring[size1] = s2[size2];
	}

	newstring[size1] = '\0';

	return (newstring);


}
