#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for uppercase character. 0 for the rest.
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
