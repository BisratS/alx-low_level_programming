#include <stdio.h>

/**
 * b4main - function executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) b4main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
