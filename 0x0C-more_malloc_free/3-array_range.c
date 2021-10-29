#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * array_range - Function that creates array of integers
 *@min: start number
 *@max: maximun number
 *
 * Return: Pointerw
 */
int *array_range(int min, int max)
{
	int arrayindex;
	int *newarray;

	if (min > max)
		return (NULL);

	newarray = malloc(((max - min) + 1) * sizeof(int));
	if (newarray == NULL)
		return (NULL);


	for (arrayindex = 0; arrayindex <= (max - min); arrayindex++)
	{
		newarray[arrayindex] = min + arrayindex;
	}

	return (newarray);
}
