#include "main.h"
/**
 * print_diagonal- Diagonal line on the terminal.
 * @n: How
 * Return: New line or 0
 * Otherwise return the diagonal
 */

void print_diagonal(int n)
{
int e = '\\';
int r;
int t;

for (r = 1; r <= n; r++)
{

if (r >= 2)
{
for (t = 1; t < r; t++)
_putchar(' ');
_putchar(e);

if (r < n)
{
_putchar('\n');
}
}

else
{
_putchar(e);
_putchar('\n');
}
}
_putchar('\n');
}
