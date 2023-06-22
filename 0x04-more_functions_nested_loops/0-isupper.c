#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer repping ASCII for capital letters
 * Return: 1 if uppercase
 * 0 will be returned otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
