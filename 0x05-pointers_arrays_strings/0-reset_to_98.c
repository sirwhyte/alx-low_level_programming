#include "main.h"

/**
 * main - takes all value with a pointer
 * Description: helps with increasing pointers
 * Return: Always 0 (Success)
 */
int main(void)
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
