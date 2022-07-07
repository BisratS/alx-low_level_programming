#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char str[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
