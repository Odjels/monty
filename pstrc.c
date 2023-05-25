#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 *
 * @head: stack_head
 * @counter: line_counter
 * Return: void
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *b;
	(void)counter;

	b = *head;
	while (b)
	{
		if (b->n > 130 || b->n <= 0)
		{
			break;
		}
		printf("%c", b->n);
		b = b->next;
	}
	printf("\n");
}

