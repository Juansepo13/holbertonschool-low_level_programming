#include <stdio.h>
#ifndef __FILE__
#define __FILE__
#endif
/**
 *main - Prints the name of the file it was compiled from, followed new line.
 *Return: 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
