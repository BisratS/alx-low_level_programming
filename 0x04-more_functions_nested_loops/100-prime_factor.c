#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	long int n, primeF;

	n = 612852475143;

	for (primeF = 2; primeF <= n; primeF++)
	{
		if (n % primeF == 0)
		{
			n /= primeF;
			primeF--;
		}
	}

	printf("%ld\n", primeF);
	return (0);
}
