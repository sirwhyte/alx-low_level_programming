#include "main.h"

/**
 * print_number - print an integer
 * @n: the integer to be printed
 * Return: nothin
 */
void print_number(int n)
{
        unsigned int k = n;

        if (n < 0)
        {
                _putchar('-');
                num = -num;
        }

        if ((num / 10) > 0)
        print_number(num / 10);
        _putchar((num % 10) + '0');
}