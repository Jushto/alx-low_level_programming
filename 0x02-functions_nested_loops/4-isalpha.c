#include "main.h"

/**
 * _isalpha - check is character is alphabetic
 * @c: alphabet being checked in ASCII
 * Return: 1 if letter
 * 0 is returned otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c <= 90) || (c > 96 && c <= 122))
		return (1);
	else
		return (0);
}
