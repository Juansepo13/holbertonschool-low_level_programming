#include <stdio.h>
/**
 * main - Main function
 *
 * Return: return 0
 */

int main(void)
{
	char c;
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
