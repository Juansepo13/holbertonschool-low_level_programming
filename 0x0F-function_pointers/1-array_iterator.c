#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes function given as parameters on array's elements.
 * @array: Array + Elements.
 * @size: Array size.
 * @action: Pointer to the function.
 * Return: none.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		(*action)(array[a]);
}
