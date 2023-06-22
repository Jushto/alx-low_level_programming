#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: the number to be computed
 * Return: last digit
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
		m = m * -1;
	_putchar (m + '0');
	return (m);
}
