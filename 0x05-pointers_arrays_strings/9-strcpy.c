#include "main.h"
/**
 * _strcpy - Funtion thar copy the string
 * @dest: data
 * @src: data
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int b = 0;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = src [b];
	return (dest);
}
