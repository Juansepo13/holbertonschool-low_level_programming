#include "main.h"
/**
 * _memset - function that fills the first n bytes of memory
 * area pointed to by s with the constant byte b
 * @s: pointer to char variable
 * @b: constant byte
 * @n: number of bytes in char var @s
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
