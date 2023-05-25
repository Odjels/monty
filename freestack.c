#include "monty.h"
/**
* free_stack - this frees a doubly linked list
* @head: head_stack
*/
void free_stack(stack_t *head)
{
	stack_t *haux;

	haux = head;
	while (head)
	{
		haux = head->next;
		free(head);
		head = haux;
	}
}

