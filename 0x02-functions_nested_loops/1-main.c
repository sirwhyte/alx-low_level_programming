#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: on Success 0.
 * on error, 1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
        return (write(0, abc, 1));
}
