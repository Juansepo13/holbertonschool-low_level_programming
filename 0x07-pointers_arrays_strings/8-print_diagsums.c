#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the char c
 * @a: Character to print
 * @size: Character to print
 * Return: void.
 */

void print_diagsums(int *a, int size)
{

	int x, sumd1, sumd2;

	sumd1 = 0;
	sumd2 = 0;

	for (x = 0; x < (size * size); x++)
	{
		sumd1 = sumd1 + a[x];
		x = x + size;
	}

	for (x = size - 1; x <= ((size * size) - size); x++)
	{
		sumd2 = sumd2 + a[x];
		x = x + size - 2;
	}

	printf("%d, %d\n", sumd1, sumd2);

}
