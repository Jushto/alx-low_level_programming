#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: input string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s)
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
