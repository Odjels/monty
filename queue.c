#include "monty.h"
/**
 * func_queue - prints the top of the queue
 * @head: stack_head
 * @counter: line_counter
 * Return: void
*/
void func_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	vag.blab = 1;
}

/**
 * addqueue - this adds node to the rear of the stack
 * @n: new_value added to the stack
 * @head: head_stack
 * Return: nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *curr_node, *haux;

	haux = *head;
	curr_node = malloc(sizeof(stack_t));
	if (curr_node == NULL)
	{
		printf("Error\n");
	}
	curr_node->n = n;
	curr_node->next = NULL;
	if (haux)
	{
		while (haux->next)
			haux = haux->next;
	}
	if (haux == NULL)
	{
		*head = curr_node;
		curr_node->prev = NULL;
	}
	else
	{
		haux->next = curr_node;
		curr_node->prev = haux;
	}
}

