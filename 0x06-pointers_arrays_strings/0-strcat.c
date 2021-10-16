#include <stdio.h>

/**
 * _strcat - Print sting
 * @dest: char
 * @src: char
 * @e: var final
 * @n: parameters quantity bytes
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while (src[i] != '\0')
		i++;

	while (dest[j] != '\0')
		j++;

	while (k <= i)
	{
		dest[j + k] = src[k];
		k++;
	}

	return (dest);
}
