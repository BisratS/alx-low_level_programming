#include "main.h"
#include <string.h>


/**
 * _strstr - function that locates a substring
 * @haystack: string to be scanned
 * @needle: string to be searched with-in haystack string
 *
 * Return: return result
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);

	return (result);
}
