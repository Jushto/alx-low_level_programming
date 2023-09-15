#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - print anything
 * @format: list of types of arguments passed to function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list ap;
	char *sep = "", *str;

	va_start(ap, format);
	i = 0;
	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (str == NULL)
					{
						printf("%snil", sep);
					}
					else
						printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
