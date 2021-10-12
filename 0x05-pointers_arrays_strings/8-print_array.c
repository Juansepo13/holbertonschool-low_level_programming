#include "main.h"
#include <stdio.h>

/**
 * print_array - print any array
 * @a: the array to print
 * @n: arrays length
 */

void pinr_array(int *a, int n)
{
	int j;

	for (j = 0; j< n; j++)
	{
		printf("%d", a[j]);
		if (j < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
