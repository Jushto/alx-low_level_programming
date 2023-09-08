#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, nmemb, int_size, space;

	int_size = sizeof(int);
	if (min > max)
		return (NULL);

	nmemb = max - min + 1;
	space = nmemb * int_size;

	ptr = malloc(space);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
