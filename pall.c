#include "monty.h"

/**
 * pall - Adds a node to the stack
 * @stack: Pointer to a pointer to top node of stack
 * @line_number: line number of the opcode
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;
	if (stack == NULL)
		exit(EXIT_FAILURE);
	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
