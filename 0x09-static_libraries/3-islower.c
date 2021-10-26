#include "main.h"

/**
 * _islower - check if character is lowercase
 * @c: Character to print
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
