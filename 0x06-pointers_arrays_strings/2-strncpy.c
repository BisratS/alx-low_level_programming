#include <string.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: number of characters to be copied frm src
 *
 * Return: return dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
