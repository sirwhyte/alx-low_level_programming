#include "main.h"

/**
* _sqrt - returns value of square root of i and n
* @n: the value of the square root
* @i: enumerate number value
* Return: the value multiplied y times
*/
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
