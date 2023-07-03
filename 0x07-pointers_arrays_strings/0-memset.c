#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: inpyut string
 * @b: constant filling the memory area
 * @n: number of byters to be filled
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int x = n;

	for (i = 0; i < x; i++)
	{
		s[i] = b;
	}
	return (s);
}
