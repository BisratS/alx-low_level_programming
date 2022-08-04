#ifndef VARIADIC_FUNCTIONS_
#define VARIADIC_FUNCTIONS_

#include <stdio.h>
#include <stdarg.h>

/**
 * struct printTypeStruct - structure definition of a printTypeStruct
 * @type: type
 * @printer: function to print
 */

typedef struct printTypeStruct
{
	char *type;
	void (*printer)(va_list);
} printTypeStruct;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void printInt(va_list priInt);
void printFloat(va_list priFlo);
void printCha(va_list priCha);
void printStr(va_list priStr);



#endif
