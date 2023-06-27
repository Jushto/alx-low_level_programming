#include "main.h"

/**
 * _puts - prints a new string followed by a new line to std out
 * @str: pointer to the string being printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
