#include "monty.h"
/**
  *func_rotr- rotates the stack from the top to the bottom
  *@head: stack_head
  *@counter: line_counter
  *Return: nothing
 */
void func_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp;

	tmp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	tmp->prev->next = NULL;
	tmp->prev = NULL;
	(*head)->prev = tmp;
	(*head) = tmp;
}

