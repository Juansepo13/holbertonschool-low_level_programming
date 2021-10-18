#include "main.h"
/**
 * _strstr - searches a string for a string
 * @haystack: string to search
 * @needle: string to search for
 * Return: pointer to needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack2 = haystack;
	char *needle2 = needle;
	int needlen = 0;

	if (!haystack || !needle)
		return (0);
	while (*haystack2)
	{
		while (*haystack2 == *needle2)
		{
			haystack2++;
			needle2++;
			needlen++;
			if (*needle2 == 0)
			{
				haystack2 = haystack2 - needlen;
				return (haystack2);
			}
			if (*haystack2 != *needle2)
			{
				needle2 = needle2 - needlen;
				needlen = 0;
			}
		}
		haystack2++;
	}
	return (haystack);
