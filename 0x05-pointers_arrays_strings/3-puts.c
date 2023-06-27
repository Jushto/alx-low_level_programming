#include "main.h"

/**
 * _puts - prints a new string followed by a new line to std out
 * @str: pointer to the string being printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
