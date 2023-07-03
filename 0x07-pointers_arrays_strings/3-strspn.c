#include "main.h"

/**
 * _strspn - get the length of a substring prefix
 * @s: input string
 * @accept: string to be matched
 *
 * Return: number of butes in initial segement of s
 * consisting of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int size1;
	int size2;
	int initial_size = 0;
	int found;
	int i;
	int j;

	size1 = sizeof(s) - 1;
	size2 = sizeof(accept) - 1;

	for (i = 0; i < size1; i++)
	{
		found = 0;
		for (j = 0; j < size2; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 1)
			initial_size++;
		else
			break;
	}
	return (initial_size);
}
