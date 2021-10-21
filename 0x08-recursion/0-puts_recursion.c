#include "main.h"
/**
 * _puts_recursion - Writes the character n
 * @s: string
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar(10);
	}
}
