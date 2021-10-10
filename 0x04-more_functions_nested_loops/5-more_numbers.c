#include "main.h"

/**
 * more_numbers - Print numbers
 * c: Var 1
 * d: Var 2
 * Return: New Line
 */

void more_numbers(void)
{
	int c;
	int d;

	for (c = 1; c <= 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
			{
				_putchar(d / 10 + '0');
			}
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
