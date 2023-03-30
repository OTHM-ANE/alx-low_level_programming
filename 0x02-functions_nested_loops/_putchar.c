#include <unistd.h>

/**
 * _putchar - writethe character c to stdout
 * @c: The charcter to print
 *
 * Return: On Success 1.
 * Onerror, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

