#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - Sum all parameters.
 *@n: Number of parameters.
 *Return: Sum of all parameters. 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list mylist;

	va_start(mylist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(mylist, int);
	va_end(mylist);
	return (sum);
}
