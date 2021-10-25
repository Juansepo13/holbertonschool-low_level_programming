#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of the program
 *
 * @argc: int
 * @argv: char
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, coins, cents;
	int denom[5] = {25, 10, 5, 2, 1};

	coins = 0;

	if (argc == 2)
	{
		if (atoi(argv[1]) <= 0)
			printf("%d\n", 0);
		else
		{
			cents = atoi(argv[1]);

			for (i = 0; i < 5; i++)
			{
				if (cents >= denom[i])
				{
					if (cents % denom[i] == 0)
					{
						coins +=  cents / denom[i];
						printf("%d\n", coins);
						return (0);
					}
					else
					{
						coins += cents / denom[i];
						cents = cents % denom[i];
					}
				}
			}
		}
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
