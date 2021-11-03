#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - Print a name.
 *@name: Name = String of chars
 *@f: Prints a name (Function pointer)
 *Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
