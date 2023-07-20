#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints the name of a pointer
 * @name: string added
 * @f: pointer for the function
 * Return: Success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
