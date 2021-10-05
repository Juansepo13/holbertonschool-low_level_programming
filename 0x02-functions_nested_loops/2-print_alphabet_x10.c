#include "main.h"

/**
 * print_alphabet_x10 - alphabet lowercase x10
 *
 */

void print_alphabet_x10(void)
{
	char h;
	int u;

	for (u = 1; u <= 10; u++)
	{
		for (h = 97; h <= 122; h++)
		{
			_putchar(h);
		}
		_putchar('\n');
	}
}
