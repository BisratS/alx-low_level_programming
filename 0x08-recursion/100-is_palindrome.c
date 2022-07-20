#include "main.h"
#include <string.h>

int stringlen(char *s);
int comp(char *s, int n1, int n2);

/**
 * is_palindrome - function that returns 1 if a
 * string is a palindrome and 0 if not
 * @s: input string
 *
 * Return: 1 for yes 0 for not
 *
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, stringlen(s) - 1));
}

/**
 * stringlen - string length
 * @s: input string
 * Return: length of string
 *
 */

int stringlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + stringlen(s + 1));
}

/**
 * comp - compare each character of the string
 * @s: input string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: no return
 *
 */

int comp(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comp(s, n1 + 1, n2 - 1));
	}
	return (0);
}
