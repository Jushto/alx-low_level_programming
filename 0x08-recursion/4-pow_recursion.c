#include "main.h"

/**
 * _pow_recursion - fucntion to calculate power
 * @x: input value
 * @y: input value
 *
 * Return: value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
