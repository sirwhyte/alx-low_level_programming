#include "main.h"
/**
 * print_alphabet_x10 -  I sometimes suffer from insomnia
 * Description: i play the alphabet game
 * print_alphabet - prints lower case alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for  (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
