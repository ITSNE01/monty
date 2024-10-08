#include "monty.h"

/**
 * pop - Adds a node to the stack.
 * @stack: Pointer to a pointer pointing to top node of stack
 * @line_number: Int representing the line number of the opcode
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
		err_(7, line_number);

	tmp = *stack;
	*stack = tmp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
