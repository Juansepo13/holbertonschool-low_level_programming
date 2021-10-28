#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Function that allocates memory
 * @b: int to the function
 *
 * Return: Pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}
