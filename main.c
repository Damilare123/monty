#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - The entry point of the program
 * @argc: The argument count
 * @argv: The argument array
 *
 * Return: 0 on Success
 */
int main(int argc, char **argv)
{
	FILE *fp = -1;

	if (argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", arg[1]);
		exit(EXIT_FAILURE);
	}

	exec_bytecodes(fp);

	fclose(fp);

	return (0);
}
