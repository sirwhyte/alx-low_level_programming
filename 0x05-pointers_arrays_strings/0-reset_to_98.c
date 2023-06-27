#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes all value with a pointer
 * Description: helps with increasing pointers
 * @*n: variables
 * Return: Always 0 (Success)
 */
void reset_to_98(int *n)
{
	int n = 78;
	int *ptr_n = &n;

	{
		printf("the value of n before dereferencing is:  %d\n", n);
		
		*ptr_n = 98;
		
		printf("the value of n after dereferencing is: %d\n", n);
	}

	return (0);
}
