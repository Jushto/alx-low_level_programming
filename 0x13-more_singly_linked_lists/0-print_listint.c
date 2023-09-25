#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print elements of a linked list
 * @h: pointer to head of a linked list
 *
 * Return: no. of elements in list
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
