#include "monty.h"

/**
  * push - implements the push opcode
  *
  * @val: ---
  * @line_no: ---
  *
  * Return: void
  */
void push(int val, int line_no)
{
	int up = -1;

	if (up < STACK_SIZE - 1)
		stack[++up] = val;
	else
	{
		fprintf(stderr, "L%d: Error: stack overflow\n", line_no);
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
		else
		{
			fprintf(stderr, "L%d: Error: usage: push integer\n", line_no);
			exit(EXIT_FAILURE);
		}
	}

	fclose(file);
	return (EXIT_SUCCESS);
}
