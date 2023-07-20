#include "function_pointers.h"

/**
 * array_iterator - executes a function on each elements of an array
 * @array: array to be operated on
 * @size: unsigned integer of elements in array
 * @action: pointer to second function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
