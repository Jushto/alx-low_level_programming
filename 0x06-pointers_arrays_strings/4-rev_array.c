#include "main.h"

/**
 * reverse_array - functin to reverse an array
 * @a: pointer to array
 * @n: size of array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
