#include "main.h"

int prime(unsigned int n, unsigned int i);

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: input number
 * Return: 1 for ye 0 for not
 *
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}

/**
 * prime - check number if it is a prime number
 * @n: input number
 * @i: increament
 * Return: 1 for yes 0 for not
 *
 */

int prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);

	}
	return (0 + prime(n, i + 1));
}
