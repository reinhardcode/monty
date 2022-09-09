#include "monty.h"
/**
 *
 */
void (*get_func(char *opcode_r))(stack_t **stack, unsigned int line_number)
{
	instruction_t opcode_a[] = {
		{"push", push},
	//	{"pall", pall},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (opcode_a[i].opcode)
	{
		if (strcmp(opcode_a[i].opcode, opcode_r) == 0)
			return (opcode_a[i].f);
		i++;
	}

	return (NULL);
}