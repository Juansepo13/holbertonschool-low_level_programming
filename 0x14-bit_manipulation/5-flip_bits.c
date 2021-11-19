#include "main.h"

/**
 * flip_bits - Function that returns number of bits you
 *   ->  need to flip one number to another.
 * @n: First number.
 * @m: Second number / Pointer.
 *
 * Return: Number of bits to flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cntr = 0; /*Counter*/
	unsigned long int flp = n ^ m; /*XOR Flipper*/

	while (flp) /*Different of zero*/
	{
		cntr += (flp & 1); /*Clean the bit*/
		flp >>= 1;
	}

	return (cntr);
}
