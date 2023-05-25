#include "monty.h"
/**
 * f_mul -this  multiplies the top two elements of the stack.
 * @head: the stack head
 * @counter: line_counter
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(vag.file);
		free(vag.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	b = *head;
	haux = b->next->n * b->n;
	b->next->n = haux;
	*head = b->next;
	free(b);
}

