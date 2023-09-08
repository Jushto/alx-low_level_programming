#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: no. of bytes to allocate
 *
 * Return: pointer to allocated memory; exit 98 if failed
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
