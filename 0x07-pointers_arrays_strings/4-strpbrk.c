#include "main.h"
#include <string.h>


/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s:string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: pointer to the character in s that matches one of the characters
 * in accept, or NULL if no such character is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char *result;

	result = strpbrk(s, accept);

	return (result);
}
