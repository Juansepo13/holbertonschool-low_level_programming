#include <stdio.h>
/**
 *main-prints the combinations of two two-digit numbers
 *Return:0 if there is no error
 */
int main(void)
{
	int primero;
	int segundo;
	for (primero = 0; primero < 100; primero++)
	{
		for (segundo = 0; segundo < 100; segundo++)
		{
			if (primero < segundo)
			{
				putchar((primero / 10) + 48);
				putchar((primero % 10) + 48);
				putchar(' ');
				putchar((segundo / 10) + 48);
				putchar((segundo % 10) + 48);
				if (primero != 98 || segundo != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
