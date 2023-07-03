#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: the destinatin string
 * @src: source string
 * @n: no. of characters to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int x = n;

	for (i = 0; i < x; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
