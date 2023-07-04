#include "main.h"

/**
 * _memset - it fills memory with constant byte
 * @s: is the pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
