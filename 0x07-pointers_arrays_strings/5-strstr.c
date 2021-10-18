#include "main.h"
/**
 * _strstr - searches a string for a string
 * @haystack: string to search
 * @needle: string to search for
 * Return: pointer to needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*j == *haystack && *j != '\0' && *haystack != '\0')
		{
			haystack++;
			j++;
		}
		if (*j == '\0')
			return (i);
		haystack = i + 1;
	}
	return (0);
}
