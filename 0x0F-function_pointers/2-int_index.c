#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: the array being searched
 * @size: size of the array
 * @cmp: the input
 * Return: Success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
		return  (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
