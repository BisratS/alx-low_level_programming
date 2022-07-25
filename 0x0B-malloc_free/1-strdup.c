#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter
 * @str: given parameter
 *
 * Return: pointer of an array of chars
 *
 */

char *_strdup(char *str)
{
	char *result;

	if (str == NULL)
		return (NULL);

	result = malloc(sizeof(str));

	result = strdup(str);

	return (result);
}
