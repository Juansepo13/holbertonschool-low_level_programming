#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 */
void print_rev(char *s)
{
	int a = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	for (a = (a - 1); s[a] != '\0' && a >= 0; a--)

	{
		_putchar(s[a]);
	}
	_putchar(10);
}
