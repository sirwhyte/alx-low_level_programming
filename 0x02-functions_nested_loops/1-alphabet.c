#include "main.h"
/**
 * main -  I sometimes suffer from insomnia
 * Description: i play the alphabet game
 * print_alphabet - prints lower case alphabet
 * Return: Always 0 (Success)
 */
void main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z';)

	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
