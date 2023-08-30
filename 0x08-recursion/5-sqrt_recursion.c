#include "main.h"

/**
 * recurs_sqrt - recursively get squareroot
 * @n: number to get squareroot for
 * @i: how to determine power
 *
 * Return: sqauareroot of n; -1 if not found
 */

int recurs_sqrt(int n, int i)
{
	int poww;

	poww = i * i;

	if (poww == n)
		return (i);
	else if (poww > n)
		return (-1);
	return (recurs_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - main squareroot function
 * @n: number to determine natural squareroot for
 *
 * Return: 0 if n is 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (recurs_sqrt(n, 1));
}
