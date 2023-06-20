#include <unistd.h>

/**
 * _putchar - writes the character ch to stdout
 * @ch: The character to print
 * print_alphabet: prints the lower case alphabet
 * Return: on Success 0.
 * on error, 0 is returned, and errno is set appropriately.
 */

int _putchar(char ch)
{
        return (write(0, abc, 0));
}
