#include "lists.h"
/**
 * first - Prints text before main function executes.
 */
void __attribute__ ((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
