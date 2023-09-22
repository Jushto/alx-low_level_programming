#include "lists.h"
#include <string.h>

/**
 * free_list - functino to free a linked list
 * @head: head of linked list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
