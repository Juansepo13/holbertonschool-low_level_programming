#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
int u;

for (u = 1; u <= 100; u++)
{
if (u == 100)
{
printf("Buzz");
}

else if ((u % 3 == 0) && (u % 5 == 0))
{
printf("FizzBuzz ");
}

else if (u % 3 == 0)
{
printf("Fizz ");
}

else if (u % 5 == 0)
{
printf("Buzz ");
}

else
{
printf("%d ", i);
}

}
printf("\n");
return (0);
}
