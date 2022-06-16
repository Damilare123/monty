#include "main.h"
#include <string.h>

void exec_bytecodes(FILE *fp)
{
	char *line = NULL;
	size_t len = 0;
	size_t line_number = 0;
	ssize_t read = -1;
	char *opcode = NULL;
	char *opcode_arg = NULL;

	stack_t *stack = NULL;
	instruction_t instructions[] = {
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop}
	};
	
	while ((read = getline(&line, &len, fp)) != -1)
	{
		line_number += 1;


	}
}
