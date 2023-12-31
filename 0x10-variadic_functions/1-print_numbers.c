#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - print numbers passed to function
 * @separator: string to be printed bet. numbers
 * @n: no. of integers passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0 || separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(ap, int));
		}
	}
	va_end(ap);
	printf("\n");
}
