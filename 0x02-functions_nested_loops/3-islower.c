#include "main.h"

/**
 * _islower - Detects lowercase and uppercase
 *
 * Description: use _putchar to print
 *@c: collect alphabet
 * Return: (1) if c is lower otherwise (0)
 *
 */
int _islower(int c)
{
	char ch;
	int lower = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
		lower = 1;
		}
	}
		return (lower);

}
