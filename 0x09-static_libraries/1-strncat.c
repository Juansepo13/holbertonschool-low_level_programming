#include "main.h"
/**
 * _strncat - using first time pointers- concat string
 *@src: Pointers
 *@dest: Parameters pointers
 *@n: Parameters quantity of bytes
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s = 0, j = 0;

	while (dest[s])
	{
		s++;
	}

	while (j < n && src[j])
	{
		dest[s] = src[j];
		s++;
		j++;
	}

	dest[s + n + 1] = '\0';

	return (dest);
}
