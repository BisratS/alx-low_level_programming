#include <string.h>
#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: input string one
 * @src: input string two
 *
 * Return: return dest
 *
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
