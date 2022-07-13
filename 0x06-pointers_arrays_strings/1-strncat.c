#include <string.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * it will use at most n bytes from src, and
 * src does not need to be null-terminated
 * if it contains n or more bytes
 *
 * @dest: input string one
 * @src: inpute string two
 * @n: n bytes from src
 *
 * Return: return dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
