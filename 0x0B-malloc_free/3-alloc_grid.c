#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - Pointer to 2 array
 * @width: width of array
 * @height: height of array
 *
 * Return: Pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int **alloc_grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	alloc_grid = (int **)malloc(height * sizeof(int *));
	if (alloc_grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		alloc_grid[i] = (int *)malloc(width * sizeof(int));
		if (alloc_grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(alloc_grid[i]);
			}
			free(alloc_grid);
			return (NULL);
		}
	}
	if (alloc_grid == NULL)
	{
		return (NULL);
	}
	return (alloc_grid);
}
