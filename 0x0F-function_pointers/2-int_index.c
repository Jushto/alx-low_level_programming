#include "function_pointers.h"

/**
 * int_index - searches for an integer in array
 * returns index of first element for which cmp function does not return 0
 * @array: pointer to integer array
 * @size: size of array
 * @cmp: pointer to function to compare values
 *
 * Return: index of first elemnt; NULL otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}