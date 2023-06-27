#include "main.h"

/**
 * print_rev - reverse string
 * @s: pointer to string to be reversed
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int j = 0;
	int k;

	while (s[j] != 0)
	{
		j++;
	}

	for (k = j; k >= 0; k--)
	{
		j--;
		_putchar(s[k]);
	}
	_putchar('\n');
}
