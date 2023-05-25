#include "monty.h"
/**
 * f_pop - prints the top of the stack
 * @head: head of the stack
 * @counter: line_counter
 * Return: void
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *b;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(vag.file);
		free(vag.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	b = *head;
	*head = b->next;
	free(b);
}

