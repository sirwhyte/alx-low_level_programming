#include <stdio.h>
#include <time.h>
/**
 * main - advanced doings
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j) || i == j)
			{
				putchar(i);
				i++;
				putchar(j);
				j++;
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}	j++;
		j = '0';
		i++;
	}

return (0);
}
