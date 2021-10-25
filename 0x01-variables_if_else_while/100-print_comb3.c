#include <stdio.h>
/**
 * main - prints numbers from 0 - 99.
 *
 * Return: 0
 */

int main(void)
{
	int cont = 0;

	while (cont <= 89)
	{
		if ((cont % 10) > (cont / 10))
		{
			putchar(cont / 10 + '0');
			putchar(cont % 10 + '0');
			if (cont < 87)
			{
				putchar(',');
				putchar(' ');
			}
		}
		cont++;
	}
	putchar('\n');
	return (0);
}
