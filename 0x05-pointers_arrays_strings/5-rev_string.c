#include "main.h"
/**
 * rev_string - write one funtion on reverse string
 * @s: data
 */
void rev_string(char *s)
{
	char *incio = s;
	char t;

	for (; *(s); s++)
	{
	}
	s--;
	for (; s >= inicio; s--)
	{
		t = *inicio;
		*inicio = *s;
		*s = t;
		incio++;
	}
}
