#include "main.h"
/**
 *main: program that multiplies two arguments
 *@argc: long array
 *@argv: array
 * Return: correct 0 / 1 error
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
