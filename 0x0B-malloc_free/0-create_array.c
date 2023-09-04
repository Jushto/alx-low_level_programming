#include "main.h"

/**
 * create_array - create an array of characters and initiailize it with c
 * @size: size of the array
 * @c: character to initialize with
 *
 * Return: pointer to array, NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * (sizeof(char)));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
