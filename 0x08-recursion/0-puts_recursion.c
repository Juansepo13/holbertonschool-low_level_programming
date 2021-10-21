#include "main.h"
/**
 * _puts_recursion - Writes the character n
 * @c: string
 *
 * Return: 0
 */
void _puts_recursion(char *c)
{
	if (*c != '\0')
	{
		_putchar(*c);
		_putchar_recursion(c + 1);
	}
	if (*c == '\0')
	{
		_putchar(10);
	}
}
