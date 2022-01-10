#include "main.h"
#include <stdio.h>
/**
 * _strspn- toupper.
 * @accept: variable
 * @s: variable
 * Return: (data)
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i = 0, y;

	for (; accept[i]; i++)
	{
		for (y = 0; s[y] != 32; y++)
		{
			if (accept[i] == s[y])
			{
				n++;
			}
		}
	}
	return (n);
}
