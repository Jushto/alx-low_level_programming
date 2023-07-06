#include "main.h"

/**
 * factorial - function to determine factorial of a given number
 * @n: number to be operated
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
