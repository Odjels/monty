#include "monty.h"
/**
 * f_pint - prints the top of the stack
 * @head: head of the stack
 * @counter: line_counter
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (!*head)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(vag.file);
		free(vag.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

