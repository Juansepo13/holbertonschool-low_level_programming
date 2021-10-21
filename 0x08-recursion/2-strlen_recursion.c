#include "main.h"
/**
 * _strlen_recursion - Print the length of a string
 * @s: String with argument
 *
 * Return: The lenght
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s == '\0')
		return (0);

	x = 1 + _strlen_recursion(s + 1);
	return (x);
}
