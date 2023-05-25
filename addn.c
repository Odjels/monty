#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *curr_node, *haux;

	haux = *head;
	curr_node = malloc(sizeof(stack_t));
	if (curr_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (haux)
		haux->prev = curr_node;
	curr_node->n = n;
	curr_node->next = *head;
	curr_node->prev = NULL;
	*head = curr_node;
}

