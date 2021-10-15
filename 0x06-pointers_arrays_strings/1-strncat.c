#include "main.h"
#include <stdio.h>

/**
 * main - check code
 * @e: var1
 * @j: var2
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
