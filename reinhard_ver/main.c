#include "monty.h"
/**
 * main - entry point of the program
 *
 */
int main(int ac, char **av)
{
	char *file = NULL;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = file_hndlr(av[1]);

	printf("%s", file);

	parse(file);

	free(file);
	
	return (0);
}
/**
 * parse - execute the process function on each line
 * of the file
 *
 */
int parse(char *file)
{
	char *str = NULL;

	str = strtok(file, "\n");
	while(str != NULL)
	{
		process(str);
		str = strtok(NULL, "\n");

	}

	return (0);
}
