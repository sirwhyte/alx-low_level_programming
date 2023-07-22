#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the parameters
 * Return: Success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int b;

	va_list holder;

	va_start(holder, n);

	for (b = 0; b < n; b++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(holder, const unsigned int);
		}

	}
	va_end(holder);
	return (sum);
}
