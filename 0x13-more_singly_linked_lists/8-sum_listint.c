#include "lists.h"

/**
 * sum_listint - adds the data in a linked list
 * @head: head of the linked list
 *
 * Return: sum of all the data (n) of the listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
