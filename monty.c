#include "monty.h"

/**
  * pint - implements the pint opcode
  *
  * @line_no: line number
  *
  * Return: void
  */

void pint(int line_no)
{
	int up = -1;

	if (up >= 0)
		printf("%d\n", stack[up]);
	else
	{
		fprintf(stderr, "L%d: Error: can't pint, stack empty\n", line_no);
		exit(EXIT_FAILURE);
	}
}

/**
  * main - entry point
  *
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Success
  */

int main(int argc, char *argv[])
{
	int up = -1;
	int val;
	int line_no = 0;
	char inst[100];
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		return (EXIT_FAILURE);
	}

	while (1)
	{
		line_no++;
		printf("Enter an instruction: ");
		if (fgets(inst, sizeof(inst), stdin) == NULL)
			break;

		if (sscanf(inst, "push %d", &val) == 1)
			push(val, line_no);
		else if (strcmp(inst, "pall\n") == 0)
		{
			if (up >= 0)
				pall();
		}
		else if (strcmp(inst, "pint\n") == 0)
		{
			pint(line_no);
		}
		else
		{
			fprintf(stderr, "L%d: Error: usage: push integer\n", line_no);
			exit(EXIT_FAILURE);
		}
	}

	fclose(file);
	return (EXIT_SUCCESS);
}
