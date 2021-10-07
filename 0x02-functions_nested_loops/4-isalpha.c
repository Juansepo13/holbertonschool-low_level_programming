#include "main.h"

/**
 * _isalpha - check if character is lowercase
 * @c: Character to print
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 89))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
