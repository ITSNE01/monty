#include "monty.h"

/**
 * pint - Prints the top node of the stack
 * @stack: Pointer to a pointer pointing to top node of stack
 * @line_number: Int representing the line number of the opcode.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		err_(6, line_number);
	printf("%d\n", (*stack)->n);
}
