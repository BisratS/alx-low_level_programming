#include "main.h"

int power(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: inpute number
 *
 * Return: the square root of n
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power(n, 2));
}

/**
 * power - natural square root of a number
 * @n: input number
 * @i: increament
 * Return: square root
 *
 */

int power(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + power(n, i + 1));
}
