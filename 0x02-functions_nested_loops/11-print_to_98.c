#include <stdio.h>
/**
 * print_to_98 - Function to print 98
 * @n: Start Number
 * Return: Void
 */
void print_to_98(int n)
{
	while (n >= 98 || n < 98)
	{
		printf("%d", n);
		if (n == 98)
			break;
		printf(", ");
		(n > 98) ? n-- : n++;
	}
	putchar('\n');
}
