#include "main.h"
/**
 * print_last_digit - Entry Point
 * @a: Variable
 * Return: 0
 */
int print_last_digit(int a)
{
	a = a % 10;

	if (a < 0)
	{
		_putchar (-a + '0');

		return (-a);
	}

	else
	{
		_putchar (a + '0');

		return (a);
	}
}
