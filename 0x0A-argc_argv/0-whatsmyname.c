#include "main.h"
#include <stdio.h>

/**
 * main - Print the name of the program
 *
 * @argc: int
 * @argv: char
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (argc > 0)
	{
		printf("%s\n", argv[i]);
		argc--;
	}
	return (0);
}
