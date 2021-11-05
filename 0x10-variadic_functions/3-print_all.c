#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 *print_all - Prints ALL.
 *@format: List of types of arguments passed to the function.
 *Return: Nothing. Void.
 */

void print_all(const char * const format, ...)
{
	int a, b;
	char *c = "";
	va_list mylist;
	print_t print_type[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL},
	};

	va_start(mylist, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		b = 0;
		while (print_type[b].op != NULL)
		{
			if (format[a] == *print_type[b].op)
			{
				printf("%s", c);
				print_type[b].f(mylist);
				c = ", ";
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(mylist);
}

/**
 *print_c - Prints a character.
 *@mylist: Character to print.
 *Return: Void. Nothing.
 */

void print_c(va_list mylist)
{
	printf("%c", va_arg(mylist, int));
}

/**
 *print_i - Prints a integer.
 *@mylist: Integer to print.
 *Return: Void. Nothing.
 */

void print_i(va_list mylist)
{
	printf("%d", va_arg(mylist, int));
}

/**
 *print_f - Prints a float.
 *@mylist: Float to print.
 *Return: Void. Nothing.
 */

void print_f(va_list mylist)

{
	printf("%f", va_arg(mylist, double));
}

/**
 *print_s - Prints a string of characters.
 *@mylist: String of characters to print.
 *Return: Void. Nothing.
 */

void print_s(va_list mylist)
{
	char *s = va_arg(mylist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
