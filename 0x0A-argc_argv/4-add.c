#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * check_digit - Revisar si no es un digito
 *
 * @a: array
 *
 * Return: integer
 */

int check_digit(char a[])
{
	int i, len;

	len = strlen(a);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(a[i]))
		{
			return (0);
		}
	}
	return (1);
}


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
	int i, result;

	result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (check_digit(argv[i]))
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
