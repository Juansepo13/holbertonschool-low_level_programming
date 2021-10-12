#include "main.h"
/**
 * puts_half - funtion thar print a half of one string
 * @str: data
 */
void puts_half(char *str)
{
	int e = 0;

	while (*(str + e))
		e++;
	if (e % 2 == 0)
	{
		e = e /2;
	}
	else
	{
		e = (e -1) / 2;
		e++;
	}
	while (*(str + e) != ('\0'))
	{
		_putchar(*(str + e));
		e++;
	}
	_putchar ('\n');
}
