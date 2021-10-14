#include <stdio.h>
/**
 * _strcat: funtion that print
 * @i: var intial
 * @j: var final
 * Return: always
 */

char *_strcat(char *dest, char *src)

{
	int i = 0;
	int j = 0;

    while(dest[i] != '\0')
	    i++;

    while(src[j] != '\0')

    {
	    dest[i] = src[j];
	    j++;
	    i++;
    }
    dest[i++] = src[j];
    return(dest);
}
