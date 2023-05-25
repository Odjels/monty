#include "monty.h"
/**
 * func_pchar - this prints the char at the top of the stack,
 * @head: the stack head
 * @counter: line_counter
 * Return: no return
*/
void func_pchar(stack_t **head, unsigned int counter)
{
	stack_t *b;

	b = *head;
	if (b == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(vag.file);
		free(vag.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (b->n > 127 || b->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(vag.file);
		free(vag.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", b->n);
}

