#include "main.h"

/**
 * factorial - function to return factorial of a given number
 * @n: number being determined factorial
 *
 * Return: nothing
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

