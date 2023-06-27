#include "main.h"

/**
 * main - takes all value with a pointer
 * Description: helps with increasing pointers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 78;
	int *ptr_num = &num;

	{
		printf("the value of num before dereferencing is:  %d\n", num);
		
		*ptr_num = 98;
		
		printf("the value of num after dereferencing is: %d\n", num);
	}

	return (0);
}
