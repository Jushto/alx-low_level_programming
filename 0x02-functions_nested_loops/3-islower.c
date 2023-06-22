#include "main.h"

/**
 * _islower - checks if letter is lowercase
 * @c: ASCII int
 * Return: 1 (lowercase)
 * 0 is returned otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

