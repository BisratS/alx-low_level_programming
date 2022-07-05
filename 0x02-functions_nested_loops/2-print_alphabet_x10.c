#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char str[26] = "abcdefghijklmnopqrstuvwxyz";
		int i;

		for (i = 0; i < 26; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
