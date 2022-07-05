#include "main.h"


/**
 *  _abs - function that computes the absolute value of an integer.
 *
 * @n: number as an integer.
 *
 *  Return: absolute value
 */

int _abs(int n)
{
	int absol;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		absol = n * -1;
		return (absol);
	}

}
