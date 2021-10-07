#include "main.h"

/**
 * times_table - print table
 * a: var
 * b: var
 * c: var
 * Return: multiplication table of 9
 */

void times_table(void)
{
	int a, b, c = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (b == 0)
			{
				_putchar(c + '0');
			}

			else if (c <= 9)

			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}

			else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
