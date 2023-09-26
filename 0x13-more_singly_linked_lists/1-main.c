#include "lists.h"
#include <stdio.h>

int main(void)
{
	size_t n;
	listint_t *head, *temp;
	listint_t hello = {3, NULL};

	head = &hello;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (1);
	temp->n = 5;
	temp->next = head;
	head = temp;
	
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (1);
	temp->n = 1;
	temp->next =head;
	head = temp;

	n = listint_len(head);
	printf("%lu\n", n);
	return (0);
}
