#include "main.h"
/**
 * _strcat - using first time pointers- concat string
 *@src: Pointers
 *@dest: Parameters pointers
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *concat = dest;

	while (*concat != '\0')
	{
		concat++;
	}
	while (*src != '\0')
	{
		*concat = *src;
		concat++;
		src++;
	}

	*concat = '\0';

	return (dest);

}
