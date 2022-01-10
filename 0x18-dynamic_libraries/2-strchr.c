#include "main.h"
#include <stdio.h>
/**
 * _strchr - toupper.
 * @c: variable
 * @s: variable
 * Return: (data)
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char ult;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)

		{
			s = &s[i];
			break;
		}
		ult = s[i + 1];
	}
	if (ult == '\0')
	{
		return ('\0');
	}
	else
	{
		return (s);
	}
}
