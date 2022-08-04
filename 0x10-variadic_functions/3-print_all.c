#include "variadic_functions.h"

/**
 * printInt - print integer
 * @priInt: argument from print_all
 */

void printInt(va_list priInt)
{
	printf("%d", va_arg(priInt, int));
}

/**
 * printFloat - print float number
 * @priFlo: argument from print_all
 */

void printFloat(va_list priFlo)
{
	printf("%f", va_arg(priFlo, double));
}

/**
 * printCha - print character
 * @priCha: argument from print_all
 */

void printCha(va_list priCha)
{
	printf("%c", va_arg(priCha, int));
}

/**
 * printStr - print string
 * @priStr: argument from print_all
 */

void printStr(va_list priStr)
{
	char *s = va_arg(priStr, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);
}

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 *
 * Return: no return
 *
 */

void print_all(const char * const format, ...)
{
	va_list allPrint;
	int i = 0, j = 0;
	char *separator = "";

	printTypeStruct printType[] = {
		{ "i", printInt },
		{ "f", printFloat },
		{ "c", printCha },
		{ "s", printStr },
		{NULL, NULL}};

	va_start(allPrint, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*printType[j].type == format[i])
			{
				printf("%s", separator);
				printType[j].printer(allPrint);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(allPrint);
}
