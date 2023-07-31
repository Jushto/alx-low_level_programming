#include "variadic_functions.h"

/**
 * print_all - function to print anything
 * @format: type of arguments passed to function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s, *sep = "";

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
