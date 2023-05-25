#include "monty.h"
/**
  *f_rotl- this rotates the stack from bottom to the top
  *@head: stack_head
  *@counter: line_counter
  *Return: nothing
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *haux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	haux = (*head)->next;
	haux->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = haux;
}

