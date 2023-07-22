#include "variadic_functions.h"
/**
 * print_numbers - returns the sum of all its parameters
 * @n: the parameters
 * @separator: separates
 * Return: Success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b, arr;

	va_list ptr;

	va_start(ptr, n);

	for (b = 0; b < n; b++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
