#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps integers
 * Description: swaps integers until it ends
 * @a: integers
 * @b: integers
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
