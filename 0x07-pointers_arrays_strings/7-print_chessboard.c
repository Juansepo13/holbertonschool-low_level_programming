#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Print Chessboard
 * @b: Character to print
 * Return: 1 on success.
 */

void print_chessboard(char (*a)[8])
{
	int b = 0, c = 0;

	while (b < 8)
	{
		_putchar(a[b][c]);
		c++;
		if (c == 8)
		{
			_putchar('\n');
			c = 0;
			b++;
		}
	}
}
.
