#include "main.h"
/**
 * print_square- Prints a square whit #
 * @size: Size of the square
 * Return: Square when size is greater than o
 * otherwise New line
 */

void print_square(int size)
{
int a = '#';
int b, c;

b = 1;
while (b <= size)
{
for (c = 1; c <= size; c++)
{
_putchar(a);
}

if (b < size)
{
_putchar('\n');
}

b++;
}

_putchar('\n');
}
