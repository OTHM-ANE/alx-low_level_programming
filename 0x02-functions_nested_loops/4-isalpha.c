#include "main.h"
/**
 * _isalpha- function that checksfor alphabets
 *
 * @c: parameter to be chacked
 *
 * Return: 1 if it is an alphabet
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
