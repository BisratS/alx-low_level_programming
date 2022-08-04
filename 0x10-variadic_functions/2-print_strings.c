#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: no return
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char*);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	van_end(args);

	printf("\n");
}
