#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Print Chessboard
 * @chess: Character to print
 * Return: 1 on success.
 */

void print_chessboard(char (*chess)[8])
{
	int a, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(chess[a][b]);
		}
		_putchar('\n');
	}
}
