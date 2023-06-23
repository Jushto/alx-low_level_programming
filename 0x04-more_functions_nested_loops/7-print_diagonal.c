#include "main.h"

void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar ('\n');
	else
	{
		for ( ; i < n; i++)
			_putchar (' ');
		_putchar('\\');
		_putchar('\n');
	}
}
