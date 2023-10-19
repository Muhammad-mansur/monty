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
