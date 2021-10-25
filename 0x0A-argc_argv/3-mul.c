#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two arguments
 * @argc: number of arguments
 * @argv: arguments supplied
 * Return: 1 to pass otherwise 0.
 */
int main(int argc, char **argv)
{
	int a = 0, b = 0;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
