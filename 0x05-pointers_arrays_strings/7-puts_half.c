#include "main.h"

/**
 * puts_half - print hlaf of a string
 *
 * @str: string input
 *
 * Return: no return
 *
 */
void puts_half(char *str)
{
	int var = 0, i;

	while (var >= 0)
	{
		if (str[var] == '\0')
			break;
		var++;
	}

	if (var % 2 == 1)
		i = var / 2;
	else
		i = (var - 1) / 2;

	for (i++; i < var; i++)
		_putchar(str[i]);
	_putchar('\n');
}
