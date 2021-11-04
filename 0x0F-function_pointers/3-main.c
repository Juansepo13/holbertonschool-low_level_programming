#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *main - Main function. Performs simple operations.
 *@argc: Number of arguments.
 *@argv: Array of characters. (Arguments).
 *Return: Result of simple operation.
 */
int main(int argc, char *argv[])
{
	int (*hold)(int, int), r;

	if (argc != 4)
		printf("Error\n"), exit(98);
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
		printf("Error\n"), exit(100);
	hold = get_op_func(argv[2]);
	if (hold == NULL)
		printf("Error\n"), exit(99);
	r = hold(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", r);
	return (0);
}
