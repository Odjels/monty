#include "monty.h"
/**
* execute - this executes the opcode
* @stack: the head linked list - stack
* @counter: counts the line
* @file: pointer to monty file
* @content: the line content
* Return: void
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", func_push}, {"pall", func_pall}, {"pint", func_pint},
				{"pop", func_pop},
				{"swap", func_swap},
				{"add", func_add},
				{"nop", func_nop},
				{"sub", func_sub},
				{"div", func_div},
				{"mul", func_mul},
				{"mod", func_mod},
				{"pchar", func_pchar},
				{"pstr", func_pstr},
				{"rotl", func_rotl},
				{"rotr", func_rotr},
				{"queue", func_queue},
				{"stack", func_stack},
				{NULL, NULL}
				};
	unsigned int a = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	vag.argi = strtok(NULL, " \n\t");
	while (opst[a].opcode && op)
	{
		if (strcmp(op, opst[a].opcode) == 0)
		{	opst[a].f(stack, counter);
			return (0);
		}
		a++;
	}
	if (op && opst[a].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

