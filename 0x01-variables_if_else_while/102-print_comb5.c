#include <stdio.h>
/**
 * main - prints numbers from 0 - 99.
 *
 * Return: 0
 */

int main(void)
{
	int c1 = 0, c2 = 1, m = 1;

	while (c1 < 100)
	{
		c2 = m;
		while (c2 < 100)
		{
			putchar(c1 / 10 + '0');
			putchar(c1 % 10 + '0');
			putchar(' ');
			putchar(c2 / 10 + '0');
			putchar(c2 % 10 + '0');
			if ((c1 == 99) && (c2 == 99))
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			c2++;
		}
		c1++;
		m++;
	}
	putchar('\n');
	return (0);
}
