#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: number being inputted
 * Return: 1 (>0)
 * 0 if == 0
 * -1 is <0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
