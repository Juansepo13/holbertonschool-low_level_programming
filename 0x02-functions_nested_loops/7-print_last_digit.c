#include "main.h"
/**
 * print_last_digit - print the last digit
 * @m: Variable
 * Return: the last digit of the numbers
 */
int print_last_digit(int m)
{
	m = m % 10;

	if (m < 0)
	{
		_putchar (-m + '0');

		return (-m);
	}

	else
	{
		_putchar (m + '0');

		return (m);
	}
}
