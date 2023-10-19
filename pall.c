#include "monty.h"

/**
  * pall - ---
  *
  * Return: void
  */

void pall()
{
	int stack[STACK_SIZE];
	int i;
	int up = -1;

	for (i = up; i >= 0; i--)
		printf("%d\n", stack[i]);
}
