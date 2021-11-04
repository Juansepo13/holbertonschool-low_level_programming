# include <stdarg.h>
# include <stdio.h>
# include "variadic_functions.h"
/**
 *print_numbers - Print numbers.
 *@separator: String to be printed between numbers.
 *@n: Number of integers passed to the function.
 *Return: Void. Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list mylist;

	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(mylist, int));
		if (i + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(mylist);
}
