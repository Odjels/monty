#include "monty.h"
/**
 * func_swap - this adds two new elements to the top of the stack.
 * @head: stack_head
 * @counter: line_counter
 * Return: nothing
*/
void func_swap(stack_t **head, unsigned int counter)
{
	stack_t *b;
	int lenght = 0, haux;

	b = *head;
	while (b)
	{
		b = b->next;
		lenght++;
	}
	if (lenght < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(vag.file);
		free(vag.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	b = *head;
	haux = b->n;
	b->n = b->next->n;
	b->next->n = haux;
}

