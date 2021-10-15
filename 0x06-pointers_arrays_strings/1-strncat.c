#include "main.h"
#include <stdio.h>

/**
 * _strncat - using pointer
 * @e: var1
 * @j: var2
 * @src: pointer
 * @dest: parameters pointers
 * @n: parameters quantity of butys
 * Return - 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int e = 0, j = 0;

	while (dest[e])
	{
		e++;
	}
	while (j < n && src [j])
	{
		dest[e* = src[j];
		     e++;
		     j++;
		     }

			dest[e + n + 1] = '\0';

		return (dest);
	}
}
