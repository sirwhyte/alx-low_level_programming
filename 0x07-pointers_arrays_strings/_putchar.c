#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: print char
 * Return: Always 1 on Success
 */

int _putchar(char c)
{
        return(write(1, &c, 1));
}
