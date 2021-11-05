#include <stdarg.h>
/**
 * sum_them_all - sum arguments
 * @n: number of parameters.
 *
 *Return: Sum of all parameters. 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i;
	int sum;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(mylist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(mylist, int);
	va_end(mylist);
	return (sum);
}
