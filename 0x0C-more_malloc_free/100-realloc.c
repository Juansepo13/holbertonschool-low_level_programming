#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_realloc - Function that reallocates a memory
 *@buffer: memory to print
 *@size: memory to print
 *
 * Return: array
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	void *nuevo_array;

	if (new_size == old_size)
		return (ptr);

	nuevo_array = malloc(new_size);
	if(!ptr)
	{
		free(ptr);
		return (nuevo_array);

	}

	if (new_size == 0)
	{
		free(ptr);
		return(NULL);
	}

	if (new_size > old_size)
		return(nuevo_array);

	nuevo_array = memcpy (nuevo_array, ptr, old_size);
	free(ptr);
	return (nuevo_array);

}
