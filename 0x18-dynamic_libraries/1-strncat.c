#include "main.h"
/**
 * _strncat - print array
 * @dest:variable
 * @src:variable
 * @n: variable
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	char *px = src;
	int c = 0;

	while (*p != '\0')
	{
		p++;
	}
	while (*px != '\0')
	{
		px++;
		c++;
	}
	if (n > c)
	{
		n = c;
	}
	while ((n > 0) && (*src != '\0'))
	{
		*p++ = *src++;
		n--;
	}
	*p = '\0';
	return (dest);
}
