#include "main.h"
#include <stdio.h>

/**
 * _strlen - string what ever
 * Description: this defends the file from being read
 * @s: string length
 * Return: Always 0 ( Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')

	{
		len++;
		s++;
	}
	return (0);
}
