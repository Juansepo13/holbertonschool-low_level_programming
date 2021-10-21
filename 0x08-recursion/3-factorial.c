#include "main.h"
/**
 * factorial - Writes the character n
 * @n: The character to print
 *
 * Return: 1.
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);
	else if (n == 0)

		return (1);

	return (n * factorial(n - 1));
}
