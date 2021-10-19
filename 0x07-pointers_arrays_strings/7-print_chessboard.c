#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Print Chessboard
 * @b: Character to print
 * Return: 1 on success.
 */

void print_chessboard(char (*a)[8])
{

	int y, x;

	for (y = 0; y < 8; y++)
	{

		for (x = 0; x < 8; x++)
		{
			_putchar (a[y][x]);
		}
		_putchar ('\n');

	}

}
