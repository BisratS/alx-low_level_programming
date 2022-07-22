#include <string.h>
#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 *
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
