#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: pointer to character string
 * @f: pointer to function taking char * as arguemnt and returing void
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
