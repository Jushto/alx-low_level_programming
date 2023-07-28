#include "lists.h"

/**
 * free_list - function to free a list_t list
 * @head: pointer to list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
