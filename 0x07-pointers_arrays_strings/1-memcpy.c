#include "main.h"

/**
 * _memcpy - it fills memory with constant byte
 * @dest: is the input
 * @src: is the string
 * @n: bytes
 * Return: Success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
