#include "monty.h"

/**
 * _pop - removes the top element of the stack
 * @stack: points to linked list stack_t
 * @line_number: number of line opcode occurs on
 * Return: void
 */
void _pop(stack_t **stack, unsigned int line_number)
{
        if (*stack == NULL)
        {
                fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
                error_exit(stack);
        }
        delete_dnodeint_at_index(stack, 0);
}
