#include "monty.h"

/**
 * _pint - prints the value at the top of the stack
 * @stack: points to linked list stack_t
 * @line_number: number of line opcode occurs on
 * Return: void
 */
void _pint(stack_t **stack, unsigned int line_number)
{
        stack_t *temp = *stack;

        if (!temp)
        {
                fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
                error_exit(stack);
        }
        printf("%d\n", temp->n);
}
