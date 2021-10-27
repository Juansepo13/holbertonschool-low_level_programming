#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free array
 * @grid: array
 * @height: Var
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
