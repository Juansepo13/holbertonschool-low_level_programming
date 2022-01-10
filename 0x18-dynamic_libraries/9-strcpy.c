#include "main.h"
/**
 * _strcpy - copie the string pointed
 * @dest: data
 * @src: data
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = src[c];
	return (dest);
}
