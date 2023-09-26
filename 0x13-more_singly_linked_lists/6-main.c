#include "lists.h"
#include <stdio.h>

int main(void)
{
	listint_t *head;
	int n;

	head = NULL;
	add_nodeint(&head, 0);
	add_nodeint_end(&head, 5);
	add_nodeint_end(&head, 3);
	print_listint(head);
	n = pop_listint(&head);
	printf("Element is %d\n", n);
	printf("PRINTED LIST\n");
	print_listint(head);
	n = pop_listint(&head);
	printf("Element is %d\n", n);
	printf("printed listt\n");
	print_listint(head);
	return (0);
}
