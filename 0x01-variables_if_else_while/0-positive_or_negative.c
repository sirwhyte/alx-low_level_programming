#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main = Positive anything is better than Negative Nothing
 * Description: Assigning random number to variable n.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d\n", n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	if (n == 0)
	{
		printf("is zero\n");
	}
	if (n < 0)
	{
		printf("is negative\n");
	}
	return (0);
}
