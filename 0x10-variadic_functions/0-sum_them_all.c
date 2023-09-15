#include "variadic_functions.h"

/**
 * sum_them_all - return sum of all the parameters
 * @n: no. of arguments
 *
 * Return: sum || 0 otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
