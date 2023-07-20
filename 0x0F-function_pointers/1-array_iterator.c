#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator- executes a function
 * @array: the array used
 * size_t: the size used for t
 * @size: the actual size
 * @action: the action carried on the array
 * Return: Success always
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
