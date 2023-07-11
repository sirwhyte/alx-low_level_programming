#include "main.h"
#include "stdlib.h"

/**
 * create_array - creates an array of chars
 * @c: input value
 * @size: the size of the array
 * Return: A filled array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int s;
	char *v;

	if (size == 0)
		return (NULL);
	v = malloc(size * sizeof(char));

	if (v == NULL)
		return (NULL);
	for (s = 0; s < size; s++)
	{
		v[s] = c;
	}

	return (v);
}
