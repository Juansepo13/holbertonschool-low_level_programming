#include "search_algos.h"
#include <stdio.h>
/**
* linear_search - search in linear way the value in array of ints
* @array: set of ints
* @size: size of array
* @value: int to find
* Return: int or -1 if value not found in array
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
			}
	}
	return (-1);
}
