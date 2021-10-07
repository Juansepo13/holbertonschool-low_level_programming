#include "main.h"

/**
 * jack_bauer - print hours in column
 * var h for hours
 * var m for minuts *
 *
 * Return: print the number
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 00; h <= 23; h++)
	{
		for (m = 00; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
