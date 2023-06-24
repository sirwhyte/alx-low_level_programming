#include "main.h"

/**
 * _islower - checks for lower case alphabets
 *
 * @c: is a parameter
 * Return: (1) if c is lower otherwise (0)
 */
int _islower(int c)
{
	char ch;
	int lower = 0;

	for (ch = 'a'; ch <= 'z'' ch++)
	{
		if (ch == c)
		{
			lower = 1;
		}
	}
		return (lower);

}
