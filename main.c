#include "monty.h"
vag_t vag = {NULL, NULL, NULL, 0};
/**
* main - the monty code interpreter
* @argc: this counts the number of arguments
* @argv: whrre the monty fileis location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t re_lin = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	vag.file = file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (re_lin > 0)
	{
		content = NULL;
		re_lin = getline(&content, &size, file);
		vag.content = content;
		counter++;
		if (re_lin > 0)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}

