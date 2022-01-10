#include "main.h"
#include <stdio.h>
/**
 * _memcpy - toupper.
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: (data)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
