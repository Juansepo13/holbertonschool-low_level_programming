#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdio.h>
typedef struct print
{
	char *op;
	void (*f)(va_list);
} print_t;
int _putchar(char c);
/* Write a function that returns the sum of all its parameters. */
int sum_them_all(const unsigned int n, ...);

#endif
