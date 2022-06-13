#include "search_algos.h"
/**
 * print_array - prints an array
 * @array: input array
 * @left: starting index
 * @right: ending index
 */
void print_array(int *array, size_t left, size_t right)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%i, ", array[i]);
	}
	printf("%i\n", array[i]);
}
/**
 * binary_search - binary search
 *
 * @array: input array
 * @size: size of the input array
 * @value: the value to search
 * Return: the index of the value to search or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	return (recursive_search(array, left, right, value));
}
/**
 * recursive_search - search recursively
 *
 * @left: the left position
 * @right: the right position
 * @array: input array
 * @value: the value to search
 * Return: the index of the value
 */
int recursive_search(int *array, int left, int right, int value)
{
	int mid;

	print_array(array, left, right);
	mid = (left + right) / 2;
	if (left >= right)
	{
		if (value == array[mid])
			return (mid);
		else
			return (-1);
	}
	if (value == array[mid])
		return (mid);
	else if (value < array[mid])
		right = mid - 1;
	else
		left = mid + 1;
	return (recursive_search(array, left, right, value));
}
