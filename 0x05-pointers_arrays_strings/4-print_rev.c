#include "main.h"
/**
 * print_rev - print string in rev more blank line
 * @s: string
 */
void print_rev(char *s)
{
	int a = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
	for (a = (a - 1); s[a] != '\0'; a--)
	{
		_putchar(s[a]);
	}
	_putchar(10);
	}
}
