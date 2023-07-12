#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns to a pointer
 * @str: input value
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int b = 0, c = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[c])
	{
		c++;
	}

	s = malloc((sizeof(char) * c) + 1);

	if (s == NULL)
		return (NULL);

	while (b < c)
	{
		s[b] = str[b];
		b++;
	}

	s[b] = '\0';
	return (s);
}
