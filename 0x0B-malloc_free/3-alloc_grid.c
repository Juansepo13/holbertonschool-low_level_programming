#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc-grid - Allocate a grid
 * @width: width of array
 * @height: height of array
 *
 * Return: Pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == 0)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
