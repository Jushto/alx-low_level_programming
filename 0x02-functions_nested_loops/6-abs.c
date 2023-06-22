#include "main.h"

/**
 * _abs - compute absoloute value of integer
 * @n: number to be computed
 * Return: Absolute value of number
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	else
		return (n);
}
