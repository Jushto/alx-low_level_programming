#include <stdio.h>
#include "main.h"
/**
 * print_array - function to print array
 * @a: pointer to array
 * @n: number of elements in the array
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
