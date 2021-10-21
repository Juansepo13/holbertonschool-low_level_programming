#include "main.h"
/**
 * _sqrt_recursion - print the Square root
 * @n: char to print
 * Return: root
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 0)
	{
		return (n);
	}
	return (ruot(i, n));
}

/**
 * ruot - squart
 * @base: factor
 * @number: data
 * Return: squart
 */

int ruot(int base, int number)
{
	if (base * base == number)
	{
		return (base);
	}
	if (base * base > number)
	{
		return (-1);
	}
	return (ruot (base + 1, number));
}
