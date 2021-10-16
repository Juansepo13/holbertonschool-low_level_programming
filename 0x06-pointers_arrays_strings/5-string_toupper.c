#include "main.h"
#include <stdio.h>

/**
 * string_toupper - entry point
 * @a: Point
 * b: Variable
 *
 * Return: a
 */

char *string_toupper(char *a)
{
	int c;

	for (c = 0; a[c] != '\0'; c++)
	{
		if (a[c] >= 97 && a[c] <= 122)
		{
			a[c] -= 32;
		}
	}
	return (a);
}
