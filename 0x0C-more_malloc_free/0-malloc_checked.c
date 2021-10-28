#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Function that allocates memory
 * @w: int to the function
 *
 * Return: Pointer
 */

void *malloc_checked(unsigned int w)
{
	unsigned int *mem;

	men = malloc(w);
	if (mem == NULL)
		exit(98);

	return (mem);
}
