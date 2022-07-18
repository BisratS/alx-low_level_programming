#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the main C string to be scanned
 * @accept: the string containing the list of characters to match in s
 *
 * Return: This function returns the number of characters in the initial
 * segment of s which consist only of characters from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int length;

	length = strspn(s, accept);

	return (length);
}
