#include "main.h"

int poww(int, int);

/**
 * binary_to_uint - converts binary no. to unsigned int
 * @b: string containing the binary no.
 *
 * Return: converted no. or 0 in case of error
 */

unsigned int binary_to_uint(const char *b)
{
	int len, i, num, temp;

	if (b == NULL)
		return (0);

	len = num = 0;
	while (b[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	temp = len - 1;
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			num += poww(2, (temp));
		temp--;
	}
	return (num);
}

/**
 * poww - raise n to power x
 * @n: the no.
 * @x: the no. of times to raise it
 *
 * Return: the result of raising
 */

int poww(int n, int x)
{
	if (x == 0)
		return (1);
	else
		return (n * poww(n, x - 1));
}
