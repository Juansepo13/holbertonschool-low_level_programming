#include "main.h"

/**
 *binary_to_uint - Converts binary number to and Unsigned int.
 *@b: Pointer.
 *
 *Return: @num converted.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0; /* numero a convertir */
	int idx; /* indice */

	if (b == NULL)
		return (0); /* si falla terne 0 */
	for (idx = 0; b[idx] != '\0'; idx++)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);
		num <<= 1;
		if (b[idx] == '1')
			num += 1;
	}
	return (num);
}
