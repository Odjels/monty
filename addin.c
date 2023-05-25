#include "monty.h"
/**
 * func_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void func_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(vag.file);
		free(vag.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	b = *head;
	haux = b->n + b->next->n;
	b->next->n = haux;
	*head = b->next;
	free(b);
}

