#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 *
 * @c: The integer in ASCII code
 *
 * Return: 1 for uppercase character. 0 for the rest.
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
