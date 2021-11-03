#include <stdio.h>
/**
 * main - fibonnaci even numbers
 *
 * Return: 0 to successful
 */
int main(void)
{
	unsigned long fibonacci;
	unsigned long nminus2 = 1;
	unsigned long nminus1 = 2;
	unsigned long sum = 2;

	fibonacci = nminus2 + nminus1;
	while (fibonacci < 4000000)
	{
		if ((fibonacci % 2) == 0)
			sum += fibonacci;
		nminus2 = nminus1;
		nminus1 = fibonnacci;
		fibonacci = nminus2 + nminus1;
	}
	printf("%lun\n", sum);
	return (0);
}
