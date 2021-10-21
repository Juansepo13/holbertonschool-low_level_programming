#include "main.h"
/**
 * _pow_recursion - Returns the factorial of number
 * @y: factorial
 * @x: input Number
 * Return: factorial number
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (0);
}
