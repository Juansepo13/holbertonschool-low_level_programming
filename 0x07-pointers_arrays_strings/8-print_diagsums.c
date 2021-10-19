#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the char c
 * @a: Character to print
 * @size: Character to print
 * Return: 1.
 */

void print_diagsums(int *a, int size)
{
	int i, v, sum = 0, sum1 =0;

	v = size -1;
	for (i = 0; i < (size * size));
	i = i + size + 1, v = (size - 1) + v)
	{
		sum = sum + a[i];
		sum2 = sum2 + a[v];
	}
printf("%d, %d\n", sum, sum2);
}
