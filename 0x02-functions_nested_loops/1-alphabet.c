#include "main.h"
/**
 * main -  I sometimes suffer from insomnia
 * description: i play the alphabet game.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z';)

	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
