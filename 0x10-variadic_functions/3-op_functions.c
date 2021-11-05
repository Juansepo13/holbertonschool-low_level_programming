#include "3-calc.h"
/**
 * op_add - operation add.
 *@a: First integer.
 *@b: Second integer.
 *
 * Return: Result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Operation sub.
 * @a: First integer.
 * @b: Second integer.
 * Return: Result operation.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - operation mult
 * @a: First integer
 * @b: integer
 * Return: result operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - operation division.
 * @a: First integer.
 * @b: Second integer.
 * Return: result operation.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - operation module.
 * @a: First integer.
 * @b: Second integer.
 * Return: result operation.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
