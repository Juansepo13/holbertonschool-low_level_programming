#include "main.h"

/**
 *
 * print_rev - function to print reverse
 * @e: pointer
 * Return: 0
 */

void print_rev(char *e)
{
	int a;

	for (a = 0; e[a] != 0; a++)
	{
		for (a = a - 1; a >= 0; a--)
		{
			_putchar(S[a]);
		}
		_putchar('\n');
	}
}
