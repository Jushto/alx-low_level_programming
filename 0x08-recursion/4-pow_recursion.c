#include "main.h"

/**
 * _pow_recursion - function to return x raised to y
 * @x: input value
 * @y: input value
 *
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
