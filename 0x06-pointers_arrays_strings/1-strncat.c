#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: max. no of bytes to be copied
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[dest_len] != 0)
		dest_len++;

	while (src[i] != 0 && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
