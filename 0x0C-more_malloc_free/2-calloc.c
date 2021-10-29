#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - uses malloc to create array
 *@nmemb: Size elements
 *@size: size of bytes
 *nmemb = Number of elements
 *
 * Return: Pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int elements;
	char *callocarray;

	if (nmemb == 0 || size == 0)
		return (NULL);

	callocarray = malloc(nmemb * size);
	if (callocarray == NULL)
		return (NULL);

	elements = 0;
	while (elements < nmemb * size)
	{
		callocarray[elements] = 0;
		elements++;
	}

	return (callocarray);
}
