#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to be searched
 * @accept: characters to be searched in s
 *
 * Return: first occurence of any bytes of accept in s
 * 0 otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != 0)
	{
		temp = accept;
		while (*temp != 0)
		{
			if (*s == *temp)
				return (s);
			temp++;
		}
		s++;
	}
	return (0);
}
