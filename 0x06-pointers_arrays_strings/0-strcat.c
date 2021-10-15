#include <stdio.h>
/**
 * _strcat: funtion that print
 * @e: var final
 * Return: always
 */

char *_strcat(char *dest, char *src)
{
	int e = 0, i;

	while (dest[e])
	{
		e++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[e] = src[i];
		e++;
	}

	dest[e] = '\0';
	return (dest);
}
