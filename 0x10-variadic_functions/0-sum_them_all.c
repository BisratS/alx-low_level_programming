#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: inpute parameters
 *
 * Return: returns the sum of all its parameters, 0 if n = 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list add;

	va_start(add, n);

	if (n == 0)
		return (0);
	for (int i = 0; i < n; i++)
		sum += va_arg(add, int);

	return (sum);
}
