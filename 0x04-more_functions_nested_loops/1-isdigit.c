#include "main.h"
/**
 * _isdigit - check if character is integer
 * @c: character to be checked in ascii
 * Return: 1 if number
 * 0 is returned otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
