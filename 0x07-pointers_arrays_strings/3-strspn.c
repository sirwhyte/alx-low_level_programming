#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix of a substring
 *@accept: input
 *@s: input
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k, asian, chick;

	asian = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		chick = 0;

	for (k = 0; accept[k] != '\0' k++)
	{
		if (accept[k] == s[j])
		{
			asian++;
			chick = 1;
		}
	}

	if (chick == 0)
	}

	return (accept);
}
