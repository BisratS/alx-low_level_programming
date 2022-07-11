#include "main.h"
#include <string.h>

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
