#include "monty.h"
/**
  *func_sub- subtration of the stack
  *@head: stack_head
  *@counter: line_counter
  *Return: nothing
 */
void func_sub(stack_t **head, unsigned int counter)
{
	stack_t *haux;
	int sub, nod;

	haux = *head;
	for (nod = 0; haux != NULL; nod++)
		haux = haux->next;
	if (nod < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(vag.file);
		free(vag.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	haux = *head;
	sub = haux->next->n - haux->n;
	haux->next->n = sub;
	*head = haux->next;
	free(haux);
}

