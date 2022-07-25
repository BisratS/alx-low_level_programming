#include <stdlib.h>
#include "main.h"


/**
 * create_array - unction that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c:specific char
 *
 * Return: return arry of charac
 *
 */

char *create_array(unsigned int size, char c)
{
	char *abc;
	unsigned int i;

	if (size == 0)
		return (NULL);

	abc = malloc(sizeof(c) * size);

	if (abc == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		abc[i] = c;

	return (abc);
}
