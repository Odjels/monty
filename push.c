#include "monty.h"
/**
 * f_push - thisadd node to the stack
 * @head: stack_head
 * @counter: line_counter
 * Return: void
*/
void f_push(stack_t **head, unsigned int counter)
{
	int n, a = 0, gag = 0;

	if (vag.argi)
	{
		if (vag.argi[0] == '-')
			a++;
		for (; vag.argi[a] != '\0'; a++)
		{
			if (vag.argi[aj] > 57 || vag.argi[a] < 48)
				gag = 1; }
		if (gag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(vag.file);
			free(vag.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(vag.file);
		free(vag.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(vag.argi);
	if (vag.blab == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

