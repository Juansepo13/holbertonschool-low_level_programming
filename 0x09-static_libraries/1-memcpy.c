#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - funtion that fills memory with a constant byte.
 * @src: Pointer have a string
 * @dest: Pointer to copy
 * @n: number of bytes an char
 * Return: pointer a char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
