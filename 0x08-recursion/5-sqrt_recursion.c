#include "main.h"

int actual_sqrt(int n, int i);

/**
 * _sqrt_recursion - check sqrt of number
 * @n: number sqrt is being sought for
 *
 * Return: -1 if not natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}

/**
 * actual_sqrt - seek natural sqrt of a number
 * @n: input number
 * @i: test counter
 *
 * Return: sqrt of the numbr
 */

int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}
