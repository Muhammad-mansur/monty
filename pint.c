#include "monty.c"

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
