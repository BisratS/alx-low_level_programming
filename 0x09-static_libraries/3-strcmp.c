#include <string.h>
#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: This is the first string to be compared
 * @s2: This is the second string to be compared
 *
 * Return: result < 0 then it indicates s1 is less than s2
 * result > 0 then it indicates s2 is less than s1
 * result = 0 then it indicates s1 is equal to s2
 *
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);

	return (result);
}
