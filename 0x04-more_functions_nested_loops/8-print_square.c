#include "main.h"

/**
 * print_square - function that prints a square
 *
 * @size: size of the square to be printed
 * Return: no return.
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		if (i != (size - 1))
			putchar('\n');
	}
	putchar('\n');
}
