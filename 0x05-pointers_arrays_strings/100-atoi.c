#include "main.h"
#include <stdio.h>
/**
 * _atoi - Convert one string to integer.
 * @s: the pointer to convert
 * Return: Integer
 */

int _atoi(char *s)
{
	int e = 0;
	usigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[e])
	{
		if (s[e] == 45)
		{
			min *= -1;
		}

		while (s[e] >= 48 && s[e] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[e] - '0');
			e++;
		}
		if (isi == 1)
		{
			break;
		}
		e++;
	}
	ni *= min;
	return (ni);
}
