#include "lists.h"

/**
 * list_len - function to return no. of elements in a list_t list
 * @h: pointer to list
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

