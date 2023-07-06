#include "main.h"

/**
* factorial - returns values
* @n: the integer to print
* Return: integer value
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
