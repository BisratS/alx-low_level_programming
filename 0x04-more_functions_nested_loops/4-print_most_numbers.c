#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * but not 2 and 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char str[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		if (str[i] != '2' && str[i] != '4')
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
