#incluide "main.h"
/**
 * _isupper - Checks for Uppercase charater
 * @c: character to be evaluated
 * Return: 1 to c is Uppercase
 * 0 to otherwise
 */

int _isupper(int c)
{
	int result;

	if (65 <= c && 90 >= c)
	{
		result = 1;
	}
	else
		result = 0;
	return (result);
}
