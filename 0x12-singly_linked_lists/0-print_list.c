#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of a linked list
 * @h: head of linked list
 *
 * Return: no. of nodes in list
 */

size_t print_list(const list_t *h)
{
	int count, i;

	i = count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			count = _strlen(h->str);
			printf("[%d] %s\n", count, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * _strlen - determine length of string
 * @s: string to be worked on
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
