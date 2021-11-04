#include "3-calc.h"
#include <string.h>
/**
 *get_op_func - Selects correct function to perform an operation asked by user.
 *@s: selects a correct function to perform the operation asked by user.
 *Return: Pointer to function that corresponds to operator given as parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != '\0')
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (ops[i].f);
}
