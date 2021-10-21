#include "main.h"
/**
 * _other_sqrt - Writes the char n.
 * @x: char to print
 * @y: 2char to print
 * Return: 1.
 * error: -1
 */

int _other_sqrt(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x < y)
	{
		return (-1);
	}
	return (_other_sqrt(x + 1, y)):
}

/**
 * _sqrt_recursion - Writes the char n.
 * @n: char to print.
 * Return: 1.
 * error: -1.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_other_sqrt(1, n));
}
