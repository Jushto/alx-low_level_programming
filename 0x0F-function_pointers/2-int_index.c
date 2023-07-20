#include "function_pointers.h"

/**
 * int_index - function to search for an integer
 * @array: the array to be searched in
 * @size: size of aray
 * @cmp: pointer to function for comparing
 *
 * Return: index of first element taht cmp does not return 0
 * (-1) if size <= 0 || no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
