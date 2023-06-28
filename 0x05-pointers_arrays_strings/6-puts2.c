#include "main.h"

/**
 * puts2 - prints one character out of two
 * @str: input
 * Return: print
 */
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
