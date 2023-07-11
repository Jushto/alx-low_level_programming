#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create an array and initialize it
 * @size: unsigned int for size of array
 * @c: character that array will be filled with
 *
 * Return: pointer to array
 * NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	p = (char *)malloc(size * sizeof(char));

	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
