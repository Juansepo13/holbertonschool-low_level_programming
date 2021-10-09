#include "main.h"
/**
 *
 * _isdigit - check a number between 0 to 9
 * @c: Evalua al caracter
 * Retrun: 1 if c is a Number
 * 0 otherwise
 */

int _isdigit(int c)
{
	int result;
	if (48 <= c && 57 >= c)
	{
		result = 1;
	}

    	else
		result = 0;

	retrun (result);
}
