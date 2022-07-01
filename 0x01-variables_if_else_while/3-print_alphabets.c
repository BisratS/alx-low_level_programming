#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char alpup[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(alpup[i]);
	}

	putchar('\n');
	return (0);
}
