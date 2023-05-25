#include "monty.h"
/**
 * func_mod - division of the 2nd element of the stack by the top
 * element of the stack
 * @head: the stack head
 * @counter: line_counter
 * Return: no return
*/
void func_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(vag.file);
		free(vag.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	b = *head;
	if (b->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(vag.file);
		free(vag.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	haux = b->next->n % b->n;
	b->next->n = haux;
	*head = b->next;
	free(b);
}

