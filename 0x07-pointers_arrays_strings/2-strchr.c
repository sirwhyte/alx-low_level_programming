#include "main.h"
#include <stddef.h>

/**
 * _strchr - writes a function that locates a character
 * @s: is the input
 * @c: is the string
 * Return: Success
 */
char *_strchr(char *s, char c)
{
	unsigned int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return (NULL);
}
