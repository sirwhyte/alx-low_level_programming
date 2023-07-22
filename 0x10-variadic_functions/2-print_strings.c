#include "variadic_functions.h"
/**
 * print_strings - returns the strings of parameters
 * @n: the number of strings
 * @separator: separates
 * Return: Success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	char *str;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (b = 0; b < n; b++)
	{
		str = va_arg(ptr_str, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}
