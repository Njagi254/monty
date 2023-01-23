#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack
 * @stack: points to linked list stack_t
 * @line_number: number of line opcode occurs on
 * Return: void
 */
void _swap(stack_t **stack, unsigned int line_number)
{
        stack_t *temp = *stack;
        int tmp;

        if (!temp || !temp->next)
        {
                fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
                error_exit(stack);
        }
        tmp = temp->n;
        temp->n = temp->next->n;
        temp->next->n = tmp;
}
