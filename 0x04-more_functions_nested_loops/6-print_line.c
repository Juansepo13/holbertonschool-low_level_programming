#include "main.h"
/**
 * print_line - Entry Point
 * e: Variable
 * @n: Variable
 * Return: New Line
 */
void print_line(int n)
{
	int e;

	e = 0;

	while (n > e)
	{
		_putchar('_');
		e++;
	}
	_putchar('\n');
}
