#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - Prints strings.
 *@separator: The string to be printed between the strings.
 *@n: The number of strings.
 *Return: Void. .
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strng;
	va_list mylist;

	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		strng = va_arg(mylist, char *);
		if (strng)
			printf("%s", strng);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(mylist);
}
