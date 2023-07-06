#include "main.h"

/**
 * _print_rev_recursion - functin to print string in reverse
 * @s: intput string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
