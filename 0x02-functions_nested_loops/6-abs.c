#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @x: Character to print
 *
 * Return: Numer -1, 0, 1
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
	_putchar('\n');
}
