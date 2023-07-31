#include "variadic_functions.h"

/**
 * sum_them_all - function to add sum of all its parameters
 * @n: number of elements
 *
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list va;
	int sum = 0;

	va_start(va, n);

	for (i = 0; i < n; i++)
		sum += va_arg(va, int);

	va_end(va);

	return (sum);
}
