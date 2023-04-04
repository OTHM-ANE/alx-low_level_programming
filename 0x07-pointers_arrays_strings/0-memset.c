#include "main.h"
/**
 * _memset - function that fills memory with constant byte.
 * @s: input string
 * @b: input character
 * @n: input size
 * Return: returns a pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
